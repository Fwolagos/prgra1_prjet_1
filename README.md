
# 🎬 Cine Management System

## Descripción

**Cine Management System** es un proyecto en C++ para gestionar un sistema de cine, que incluye la administración de películas, salas, horarios, reservas, y ventas. El sistema permite agregar y gestionar películas, crear y gestionar horarios de proyecciones, realizar reservas y ventas de boletos.

Este proyecto utiliza clases para representar los componentes principales del sistema de cine, como `Movie`, `Room`, `Schedule`, `Booking`, y `Sale`, proporcionando una estructura clara y modular para la aplicación.

---

## Estructura del Proyecto

### Clases Principales

- **Movie**: Representa una película, con atributos como nombre, duración, sinopsis, reseñas e idioma.
- **Room**: Representa una sala de cine, con un identificador y capacidad.
- **Schedule**: Administra los horarios de las películas, relacionando películas con salas y tiempos de proyección.
- **Booking**: Gestiona las reservas realizadas por los clientes, incluyendo el horario y asientos reservados.
- **Sale**: Registra las ventas de boletos, asociando una reserva con un cliente.
- **Cinema**: Es la clase principal que administra todo el sistema, manteniendo arrays dinámicos para películas, salas, horarios, reservas y ventas.

---

## Características

- **Gestión de Películas**: Puedes añadir, editar, y listar películas en el cine.
- **Administración de Salas**: Permite definir salas con capacidades específicas.
- **Creación de Horarios**: Define horarios para la proyección de películas, relacionando salas y películas.
- **Sistema de Reservas**: Los usuarios pueden reservar boletos para una película en un horario determinado.
- **Registro de Ventas**: El sistema lleva un registro de las ventas realizadas.

---

## Requisitos del Sistema

- **Lenguaje**: C++11 o superior
- **Compilador**: GCC, MinGW, o cualquier compilador compatible con C++
- **Entorno de Desarrollo**: Puedes utilizar cualquier entorno de desarrollo como Visual Studio Code, CLion, Code::Blocks o incluso desde la terminal.

---

## Instalación

1. **Clona el repositorio:**

   ```bash
   git clone https://github.com/Fwolagos/prgra1_prjet_1.git
   ```

2. **Compila el proyecto:**

   Si estás utilizando un compilador como `g++`:

   ```bash
   g++ -o cine main.cpp Movie.cpp Room.cpp Schedule.cpp Booking.cpp Sale.cpp Cinema.cpp -std=c++11
   ```

3. **Ejecuta el programa:**

   ```bash
   ./cine
   ```
4. **Opcional, Descargar el ejecutable de la carpeta:**
---

## Funcionalidades del Sistema

### Menú Principal

El sistema presenta un menú principal desde el cual se puede navegar a las distintas secciones: **Archivo**, **Mantenimiento**, **Reserva**, y **Venta**.

#### Opciones del Menú

1. **Archivo**:
   - Acerca del cine
   - Salir del sistema

2. **Mantenimiento**:
   - Gestión de Películas
   - Gestión de Salas
   - Gestión de Horarios

3. **Reserva**:
   - Realizar una reserva seleccionando una película y un horario

4. **Venta**:
   - Registrar la venta de una reserva

---

## Ejemplos de Datos Predefinidos

En el sistema se inicializan algunos datos estáticos para pruebas rápidas. Estos incluyen películas, salas, horarios, reservas y ventas predefinidos. Para lograr esto, el sistema cuenta con la función `initialize()` dentro de la clase `Cinema`, que genera estos datos.

### Películas Predefinidas
```cpp
Movie("Avatar", 3, "Viaje en el espacio", 5, "Español");
```

### Salas Predefinidas
```cpp
Room(111, 200);
```

### Horarios Predefinidos
```cpp
Schedule(404, "25/02/2005", "5:00 PM", "8:00 PM", movie, room);
```

### Reservas y Ventas Predefinidas
```cpp
Booking(999, 20000, 5, schedule);
Sale(booking, 604910277, 9999559);
```

---

## Ejemplo de Uso

### Menú Principal:
```
+-----------------------------+
|       Bienvenidos al Cine    |
| 1. Archivo                  |
| 2. Mantenimiento             |
| 3. Reserva                   |
| 4. Venta                     |
| 5. Salir                     |
+-----------------------------+
```

### Películas:
```
+-----------------------+---------+-------------------------+---------+-----------+
| Nombre                | Duración| Sinopsis                | Reseñas | Idioma    |
+-----------------------+---------+-------------------------+---------+-----------+
| Avatar                | 3       | Viaje en el espacio      | 5       | Español   |
+-----------------------+---------+-------------------------+---------+-----------+
```

### Horarios:
```
+------------+-------------------+-------+----------+----------+
|   Fecha    | Nombre de la peli  | Sala  | Inicio   | Fin      |
+------------+-------------------+-------+----------+----------+
| 25/02/2005 | Avatar             |   111 |  5:00 PM |  8:00 PM |
+------------+-------------------+-------+----------+----------+
```

---

## Contribución

Si deseas contribuir al proyecto, por favor realiza un fork del repositorio, crea una rama para tu función (`git checkout -b nueva-funcion`), haz un commit de tus cambios (`git commit -m 'Añadir nueva función'`), y finalmente abre un pull request.
```

---

Este archivo está listo para que lo pegues directamente en tu repositorio de GitHub. Se adapta a tu proyecto con las funciones que has descrito, y se puede ampliar si deseas agregar más detalles técnicos o instrucciones específicas.
