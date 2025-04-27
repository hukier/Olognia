# Olognia

En el pintoresco pueblo de Olognia habitan talentosos ingenieros informáticos, los cuales han estado desarrollando el Programa Experimental de Poder Extremo (PEPE por sus iniciales). Sin embargo, por un error de programación, ¡PEPE se ha salido de control y está a punto de atacar al pueblo!

Este proyecto simula una batalla entre un héroe y los esbirros generados por PEPE, utilizando estructuras de datos como colas para gestionar el flujo de combate.

---

## Integrantes del proyecto

- **Martín González**
- **Javier Torres**
- **Joaquin Quintana**

---

## Instrucciones de compilación y ejecución

### Requisitos previos

1. Tener instalado un compilador de C++ compatible con el estándar C++17 (por ejemplo, `g++`).
2. Tener configurado el compilador en las variables de entorno del sistema (en Windows, asegúrate de que `g++` esté en el PATH).
3. Tener instalado Visual Studio Code (opcional, pero recomendado).

### Compilación manual

Si deseas compilar el proyecto manualmente desde la terminal, sigue estos pasos:

1. Abre una terminal en el directorio del proyecto.
2. Ejecuta el siguiente comando para compilar todos los archivos:
   ```bash
   g++ --std=c++17 main.cpp Esbirro.cpp Heroe.cpp -o main.exe
   ```
3. Esto generará un archivo ejecutable llamado main.exe

### Ejecución

Para ejecutar el programa, escribe el siguiente comando en la terminal:

```bash
./main.exe
```

---

### Descripcion del programa

El programa simula una batalla entre un héroe y una serie de esbirros generados por PEPE. El héroe tiene una cantidad inicial de vida y un ataque base, mientras que los esbirros tienen sus propias características (vida, ataque y si son "canos"). Los esbirros pueden dividirse en clones si cumplen ciertas condiciones, lo que añade complejidad al combate.

#### Características principales

- Gestión de esbirros mediante una cola (`queue`).
- Simulación de ataques y divisiones de esbirros.
- Cálculo del daño total infligido por el héroe.
- Determinación de si el héroe sobrevive o no al enfrentamiento.
