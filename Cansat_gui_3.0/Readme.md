Instructivo para Instalar y Ejecutar la Interfaz Gráfica del CanSat
Instalación de Python:

Ve a la página oficial de Python en https://www.python.org/downloads/ y descarga la versión más reciente.
Sigue los pasos de instalación según tu sistema operativo (Windows, Mac, o Linux).
Durante la instalación, asegúrate de marcar la opción "Add Python to PATH".
Verificación de la instalación de Python:

Abre una terminal o el símbolo del sistema y escribe el siguiente comando para verificar que Python se ha instalado correctamente:
bash
Copiar código
python --version
Deberías ver un mensaje que muestra la versión de Python instalada.
Instalación de pip:

pip debería instalarse automáticamente con Python. Para verificar, ejecuta:
bash
Copiar código
pip --version
Si no está instalado, sigue este tutorial de instalación de pip.
Descargar el Repositorio en formato ZIP:

Ve al repositorio de GitHub: Repositorio J-Cansat GUI.
Haz clic en el botón Code y selecciona Download ZIP.
Extrae el contenido del archivo ZIP en una carpeta de tu elección.
Instalar los requirements.txt:

Abre una terminal o símbolo del sistema en la carpeta donde descargaste el repositorio.
Navega a la carpeta Cansat_gui_3.0:
bash
Copiar código
cd path/to/Cansat_gui_3.0
Instala las dependencias necesarias ejecutando:
bash
Copiar código
pip install -r requirements.txt
Ejecutar el Código Principal:

Asegúrate de estar en la carpeta Cansat_gui_3.0.
Ejecuta el archivo mainwindow.py con Python:
bash
Copiar código
python mainwindow.py
Solución de Problemas Comunes:

Si ves un error relacionado con las dependencias, revisa el archivo requirements.txt y asegúrate de que todas las bibliotecas se hayan instalado correctamente.
Si tienes problemas para ejecutar mainwindow.py, verifica la versión de Python o intenta reinstalar las dependencias.
