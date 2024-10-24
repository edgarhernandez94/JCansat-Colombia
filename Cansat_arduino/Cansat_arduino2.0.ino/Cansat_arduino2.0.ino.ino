#include <DFRobot_BMX160.h>
#include <TinyGPS.h>
#include <Adafruit_BMP3XX.h>  // Biblioteca para el sensor BMP388

TinyGPS gps; // Crear objeto GPS
DFRobot_BMX160 bmx160; // Crear objeto BMX160
Adafruit_BMP3XX bmp;  // Crear objeto BMP388

float lat, lon;
int temp, pressure, altitude, battery;
const int batteryPin = A0; // Pin analógico para medir el voltaje de la batería
const int ledPin = 13;     // Pin del LED (puede ser el LED integrado)
unsigned long previousMillis = 0; // Para el parpadeo del LED
const long interval = 2000; // Intervalo de 2 segundos

// Variables para el promedio móvil
const int numSamples = 10;  // Número de muestras para promediado
float voltageSamples[numSamples];
int sampleIndex = 0;
float totalVoltage = 0;

void setup(){
  Serial.begin(115200);
  Serial1.begin(9600);
  pinMode(ledPin, OUTPUT); // Configurar el pin del LED como salida
  delay(100);

  // Inicializar el sensor BMX160
  if (!bmx160.begin()) {
    Serial.println("No se pudo inicializar el sensor BMX160 (IMU)");
    while (1);
  }
  Serial.println("BMX160 inicializado");

  // Inicializar el sensor BMP388
  if (!bmp.begin_I2C(0x76)) {
    Serial.println("No se pudo inicializar el sensor BMP388 (presión y temperatura)");
    Serial.println("Verifica las conexiones y la dirección I2C.");
    while (1);
  }
  Serial.println("BMP388 inicializado");

  // Configuración adicional para BMP388
  bmp.setTemperatureOversampling(BMP3_OVERSAMPLING_8X);
  bmp.setPressureOversampling(BMP3_OVERSAMPLING_4X);
  bmp.setIIRFilterCoeff(BMP3_IIR_FILTER_COEFF_3);
  bmp.setOutputDataRate(BMP3_ODR_50_HZ);

  // Inicializar array de muestras de voltaje a 0
  for (int i = 0; i < numSamples; i++) {
    voltageSamples[i] = 0;
  }
}

void loop(){
  unsigned long currentMillis = millis();

  // Parpadeo del LED cada 2 segundos
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    digitalWrite(ledPin, !digitalRead(ledPin)); // Cambia el estado del LED
  }

  // Lectura de datos del sensor BMX160 (magnómetro, giroscopio, acelerómetro)
  sBmx160SensorData_t Omagn, Ogyro, Oaccel;
  bmx160.getAllData(&Omagn, &Ogyro, &Oaccel);

  // Leer los datos de presión y temperatura desde el sensor BMP388
  if (!bmp.performReading()) {
    Serial.println("Error al leer los datos del sensor BMP388");
    return;
  }

  // Asignar valores de presión, temperatura y altitud
  pressure = bmp.pressure / 100.0; // Convertir a hPa
  temp = bmp.temperature; // La temperatura ya está en °C
  altitude = bmp.readAltitude(1013.25); // Altitud en metros (suponiendo presión a nivel del mar 1013.25 hPa)

  // Leer el voltaje de la batería desde el divisor de voltaje
  int analogValue = analogRead(batteryPin);
  float batteryVoltage = (analogValue / 626.0) * 5.0 * 2; // Multiplicar por 2 debido al divisor de voltaje
  lat=4.646603;
  lon=-74.060138;
  // Promedio móvil simple para suavizar el voltaje
  totalVoltage -= voltageSamples[sampleIndex];  // Restar la muestra más antigua
  voltageSamples[sampleIndex] = batteryVoltage; // Actualizar con la nueva lectura
  totalVoltage += batteryVoltage;               // Sumar la nueva lectura al total
  sampleIndex = (sampleIndex + 1) % numSamples; // Avanzar el índice circularmente
  float averageVoltage = totalVoltage / numSamples; // Calcular el promedio

  // Estabilizar el porcentaje de batería por rangos
  if (averageVoltage >= 5.8) {
    battery = 100;
  } else if (averageVoltage >= 5.5) {
    battery = 90;
  } else if (averageVoltage >= 5.2) {
    battery = 80;
  } else if (averageVoltage >= 4.9) {
    battery = 70;
  } else if (averageVoltage >= 4.6) {
    battery = 60;
  } else if (averageVoltage >= 4.3) {
    battery = 50;
  } else if (averageVoltage >= 4.0) {
    battery = 40;
  } else if (averageVoltage >= 3.7) {
    battery = 30;
  } else if (averageVoltage >= 3.4) {
    battery = 20;
  } else if (averageVoltage >= 3.1) {
    battery = 10;
  } else {
    battery = 0; // Considerar la batería descargada si es menor a 3.1V
  }

  // Enviar los datos a través de Serial
  Serial.print(Omagn.x); Serial.print(",");
  Serial.print(Omagn.y); Serial.print(",");
  Serial.print(Omagn.z); Serial.print(",");
  Serial.print(Ogyro.x); Serial.print(",");
  Serial.print(Ogyro.y); Serial.print(",");
  Serial.print(Ogyro.z); Serial.print(",");
  Serial.print(Oaccel.x); Serial.print(",");
  Serial.print(Oaccel.y); Serial.print(",");
  Serial.print(Oaccel.z); Serial.print(",");
  Serial.print(pressure); Serial.print(",");
  Serial.print(temp); Serial.print(",");
  Serial.print(altitude); Serial.print(",");

  // GPS lectura
  while (Serial1.available()) {
    if (gps.encode(Serial1.read())) {
      gps.f_get_position(&lat, &lon);
    }
  }

  Serial.print(lat, 6);
  Serial.print(",");
  Serial.print(lon, 6);
  Serial.print(",");
  Serial.print(battery);  // Mostrar el porcentaje de la batería calculado
  Serial.println("");

  delay(1000); // Pequeño delay para no sobrecargar el Serial
}
