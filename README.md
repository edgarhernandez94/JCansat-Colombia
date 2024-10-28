<p align="center">
  <img src="https://pbs.twimg.com/profile_images/1356640339180707841/lFpJ-GjN_400x400.jpg"/>
</p>

# J-CANSAT

El **J-CANSAT** es un proyecto educativo que combina el concepto de CanSat (un satélite en miniatura) con tecnología innovadora. Este repositorio está diseñado como un recurso práctico para estudiantes y entusiastas que participan en cursos o workshops sobre el armado y la operación de un CanSat con forma de cohete. Aquí encontrarás el código y los recursos relacionados con el proyecto J-CANSAT, incluyendo herramientas visuales para una experiencia interactiva.

El J-CANSAT busca proporcionar una experiencia **práctica** y **didáctica** en la construcción y operación de un CanSat, un dispositivo del tamaño de una lata de refresco que imita el funcionamiento de un satélite real. Integra componentes como placas PCB, sensores, módulos de comunicación y almacenamiento de datos, permitiendo la simulación de misiones satelitales con la recopilación y transmisión de datos en tiempo real.

Este repositorio incluye:
- **Código fuente** para programar y controlar el CanSat.
- **Documentación técnica** y **manuales de usuario** para entender cada parte del sistema.
- **Herramientas interactivas**, como una interfaz gráfica (GUI) y realidad aumentada (AR) para visualizar el CanSat en tu celular.

Además, durante el curso o workshop, los estudiantes desarrollarán habilidades en las siguientes áreas:
1. **Programación de microcontroladores** para controlar el CanSat.
2. **Integración de sensores y comunicación satelital** mediante la conexión de módulos de sensores, cámara y antena.
3. **Operación de sistemas satelitales simulados** para misiones de monitoreo ambiental, análisis atmosférico, y más.

---

# Manual del J-CANSAT

Este README sirve como manual de referencia para el proyecto J-CANSAT. Aquí aprenderás todo lo necesario para configurar, ensamblar, programar y usar tu CanSat. Este manual está diseñado para acompañar un curso o workshop, con teoría disponible en las presentaciones complementarias. 

Si deseas revisar la teoría completa, consulta [este enlace de presentaciones](https://github.com/edgarhernandez94/JCansat-Colombia/tree/main).

## Contenidos del Manual

1. [Introducción](#introducción)
   - Visión general del CanSat y sus aplicaciones
   - Propósito y objetivos del manual
2. [Requisitos del Sistema](#requisitos-del-sistema)
   - Hardware y software necesario
3. [Configuración Inicial](#configuración-inicial)
   - Instalación del entorno de desarrollo
   - Configuración de herramientas y bibliotecas necesarias
4. [Ensamblaje del CanSat](#ensamblaje-del-cansat)
   - Instrucciones paso a paso para ensamblar el CanSat
   - Conexiones y cableado
5. [Programación del CanSat](#programación-del-cansat)
   - Explicación del código y cómo cargarlo en el CanSat
6. [Configuración de Sensores y Módulos](#configuración-de-sensores-y-módulos)
   - Cómo calibrar los sensores y configurar los módulos
7. [Uso y Operación](#uso-y-operación)
   - Uso del CanSat antes, durante y después de la misión
   - Recolección y análisis de datos
8. [Resolución de Problemas](#resolución-de-problemas)
   - Solución a problemas comunes
9. [Recursos Adicionales](#recursos-adicionales)
   - Enlaces a tutoriales, documentación y herramientas útiles

---

## Introducción

¡Bienvenido al manual del J-CANSAT! Esta sección ofrece una introducción completa al proyecto, explicando los conceptos básicos del CanSat, sus aplicaciones y cómo este manual te ayudará en tu aprendizaje práctico.

### Visión General del CanSat

El **J-CANSAT** es un satélite en miniatura con forma de cohete, diseñado para caber dentro de una estructura compacta. Aunque pequeño, está equipado para realizar misiones científicas simuladas, recolectar datos ambientales y transmitirlos en tiempo real. El J-CANSAT es una herramienta educativa perfecta para aprender sobre ingeniería aeroespacial, electrónica y programación.

### Aplicaciones del CanSat

Las aplicaciones del CanSat abarcan varias áreas, como:
- Estudios atmosféricos y pronóstico del tiempo.
- Monitoreo ambiental y análisis de contaminación.
- Sensores remotos e imágenes.
- Proyectos educativos y competencias.

### Propósito y Objetivos del Manual

Este manual está diseñado para ser parte de un **curso o workshop**, proporcionando pasos claros y detallados para guiarte en la construcción y programación del CanSat. Los principales objetivos son:

1. Enseñarte cómo ensamblar y programar el J-CANSAT.
2. Guiarte en el uso de herramientas interactivas como la GUI y la AR.
3. Acompañar tu aprendizaje con ejemplos prácticos y teoría en las presentaciones proporcionadas. Además, tendrás acceso a contenido educativo complementario del J-CANSAT a través de [este enlace](https://drive.google.com/drive/folders/1GNC4Jz8p9KHgKdK73it8v78G0GBuc7wd?usp=sharing).

### Flujo de trabajo del curso

El flujo de trabajo del curso incluye los siguientes pasos clave:
1. **Instalación del software**: Incluye la configuración del Arduino IDE y la GUI para controlar el CanSat.
2. **Ensamblaje del sistema**: Aunque las placas PCB ya vienen prearmadas, los estudiantes aprenderán a ensamblar el sistema conectando las placas de manera correcta, orientando el sistema, y conectando tanto la antena como la cámara a sus respectivas ubicaciones.
3. **Programación y prueba**: Los estudiantes programarán el CanSat y lo probarán utilizando la GUI, monitoreando los datos transmitidos en tiempo real.
4. **Visualización y análisis de datos**: Se utilizarán herramientas como la GUI y AR para visualizar el CanSat y analizar los datos recolectados durante las misiones simuladas.


## Requisitos del Sistema

Para trabajar con el J-CANSAT, asegúrate de contar con lo siguiente:

### Requisitos de Hardware
- Placas PCB del CanSat (según el kit).
- Sensores (IMU, GPS, presión atmosférica).
- Otros módulos: cámara, módulo de RF, etc.

#### Componentes detallados:

| Componente                              | Descripción                                  |
|------------------------------------------|----------------------------------------------|
| Dos tiras de encabezado de 32 pines      | Conectores para las placas                   |
| Resistencia de 10k                       | Resistencia utilizada en la placa            |
| Cinco encabezados de 8 pines             | Para conexiones entre sensores               |
| LED de 5 mm                              | Indicador de estado                         |
| Resistencia de 220-330 ohm               | Para el LED                                  |
| Botón de presión de 2 pines              | Botón para encender/apagar                   |
| Conector JST de 2 pines                  | Para conexiones de alimentación              |
| Módulo GPS                               | Sensor GPS para seguimiento                  |
| Módulo de radiofrecuencia                | Para transmisión de datos                    |
| Módulo de carga                          | Para cargar el CanSat                        |
| Arduino Mega Micro                       | Controlador principal del CanSat             |
| Módulo de cámara                         | Cámara para capturar imágenes                |
| Módulo IMU                               | Unidad de medición inercial                  |
| Módulo de temperatura                    | Sensor de temperatura                       |

### Placas PCB y Componentes

1. **Vista 1: Placa 1**
   ![image](https://github.com/mirai-innovation/JCansat/assets/38308445/e790255b-5c78-44f2-83d2-a5bfdc8de2ad)
   
2. **Vista 2: Placa 1**
   ![image](https://github.com/mirai-innovation/JCansat/assets/38308445/e96d3f5a-8b1b-4850-b695-46d501dac048)

3. **Vista 1: Placa 2**
   ![image](https://github.com/mirai-innovation/JCansat/assets/38308445/77cf4c36-224e-4d5e-b7ae-cee081ea7b26)
   
4. **Vista 2: Placa 2**
   ![image](https://github.com/mirai-innovation/JCansat/assets/38308445/2de3cef8-dcd9-4071-88c5-48cd77f86c66)

### Requisitos de Software

Además del hardware, necesitarás el siguiente software:

- **Arduino IDE**: Para programar el CanSat.
- **J-Cansat GUI**: Interfaz gráfica para controlar el CanSat (ubicada en `cansat_gui_3.0`).
- **Controlador CH340**: Para la conexión USB entre el CanSat y la computadora (incluido en la carpeta `Cansat_arduino`).
- **Visor de AR**: Abre directamente el archivo en Android o iOS desde la carpeta `Cansat_AR` para visualizar el modelo en realidad aumentada.



## Configuración Inicial

### Instalación del Entorno de Desarrollo

1. **Instalación de Python**:
   - Para ejecutar la GUI del CanSat, necesitarás instalar **Python** en tu computadora. Descarga la última versión de Python desde el sitio oficial: [Python Downloads](https://www.python.org/downloads/).
   - Durante la instalación, asegúrate de marcar la opción **"Add Python to PATH"** para que Python esté disponible desde la línea de comandos.
   
  
2. **Instalación de las dependencias de Python**:
   - Dentro de la carpeta `cansat_gui_3.0`, encontrarás el archivo `requirements.txt`, que contiene las bibliotecas necesarias para ejecutar la interfaz gráfica (GUI).
   - Para instalar todas las dependencias, abre la terminal o línea de comandos y navega hasta la carpeta `cansat_gui_3.0`. Luego ejecuta el siguiente comando:
     ```bash
     pip install -r requirements.txt
     ```
   - Este comando instalará todas las bibliotecas listadas en el archivo, como `Tkinter`, `matplotlib` y otras necesarias para la GUI.
  

3. **Arduino IDE**: 
   - Descarga e instala el [Arduino IDE](https://www.arduino.cc/en/software).
   - Abre el IDE y asegúrate de seleccionar la versión correcta de la placa **Arduino Mega** en el menú de "Herramientas" > "Placa" > "Arduino Mega o Mega 2560".
   - Si es la primera vez que usas el Arduino IDE, sigue el proceso de instalación estándar que incluye configurar los drivers de las placas.

4. **J-Cansat GUI**:
   - Navega a la carpeta `cansat_gui_3.0` dentro del repositorio.
   - Después de instalar las dependencias con `pip`, puedes ejecutar la GUI abriendo el archivo Python correspondiente (`main.py`).
   - La GUI te permitirá visualizar y controlar los datos que el CanSat recoja en tiempo real.
   - Aqui puede encontrar un tutorial detallado de la insatalacion de la interfaz grafica: https://drive.google.com/file/d/182uIa4mScQuNg7ySqFOvQKNl8Lw1lH_b/view?usp=drive_link

5. **Controlador CH340**:
   - El controlador **CH340** es necesario para la comunicación entre el CanSat y tu computadora. Los archivos del controlador están incluidos en la carpeta `Cansat_arduino`.
   - Sigue las instrucciones para instalar el controlador en tu sistema operativo (Windows o Mac). Asegúrate de reiniciar tu computadora después de la instalación.

---

### Configuración de Herramientas Interactivas

1. **Realidad Aumentada (AR)**:
   - Para visualizar el CanSat en realidad aumentada, abre el archivo de la carpeta `Cansat_AR` directamente en tu dispositivo Android o iOS. No necesitas una aplicación adicional, ya que los archivos están optimizados para abrirse directamente desde el sistema operativo.
   - Al abrir el archivo, podrás visualizar un modelo en 3D del CanSat en tu dispositivo, lo que te permitirá inspeccionar el diseño y la estructura desde diferentes ángulos.

2. **Consejo adicional**:
   - Si experimentas problemas con la visualización en AR, verifica que tienes suficiente espacio en la memoria del dispositivo y asegúrate de tener la última actualización del sistema operativo Android o iOS.

---




## Ensamblaje del CanSat

Esta sección te guiará en el ensamblaje del CanSat, desde la recolección de componentes hasta la conexión de sensores y módulos.

### Paso 1: Reúne los Componentes

Antes de empezar, asegúrate de tener todos los componentes del kit:
- Cuerpo del CanSat (puedes imprimir el chasis con los archivos 3D disponibles).
- Placas PCB.
- Sensores y módulos.

### Paso 2: Montaje

1. **Montaje de Placas:** Inserta las placas en el chasis siguiendo el esquema incluido en la documentación técnica.
2. **Conexión de Sensores:** Conecta cada sensor y módulo a las placas utilizando los diagramas de conexión proporcionados.

### Paso 3: Verificación de Conexiones

Antes de cerrar el chasis, asegúrate de revisar todas las conexiones para evitar problemas durante la operación.

## Programación del CanSat

### Explicación del Código

El CanSat se programa en Arduino. El código fuente se encuentra en la carpeta `Cansat_arduino`. Abre los archivos `.ino` en el Arduino IDE, personaliza los parámetros según tu misión y sigue los siguientes pasos para cargar el código:

1. Conecta el CanSat a tu computadora mediante el cable USB.
2. Abre el Arduino IDE y selecciona la placa correcta.
3. Carga el código en el CanSat.

### Subir Código Arduino

1. Abre el archivo `cansat.ino` en el Arduino IDE.
2. Selecciona la placa y el puerto correcto.
3. Verifica el código y luego súbelo al CanSat.

## Configuración de Sensores y Módulos

### Calibración de Sensores

Sigue las instrucciones de cada sensor para calibrarlo correctamente. Los sensores incluidos pueden ser el IMU, GPS, y sensores de presión.

### Integración de Módulos

Configura los módulos de comunicación y almacenamiento de datos, como la tarjeta SD y el módulo RF, siguiendo los pasos indicados en la documentación técnica.

## Uso y Operación

### Antes de la Misión

Revisa el estado de la batería, las conexiones, y asegúrate de que los sensores estén bien calibrados.

### Durante la Misión

Monitorea los datos en tiempo real a través de la **GUI** incluida. Sigue las instrucciones para ver los datos enviados por el CanSat.

### Después de la Misión

Analiza los datos recolectados y compáralos con los objetivos de la misión. Utiliza las herramientas de análisis provistas en el repositorio para procesar los datos.

## Resolución de Problemas

Esta sección cubre problemas comunes como:

- **El CanSat no enciende:** Verifica las conexiones y la carga de la batería.
- **Problemas con la programación:** Asegúrate de que el código esté compilado correctamente y la placa esté seleccionada en el IDE.

## Recursos Adicionales

Para más información, consulta los recursos adicionales en las carpetas `tutorials` y `docs`, donde encontrarás tutoriales detallados y documentación técnica para profundizar en el uso del CanSat.

