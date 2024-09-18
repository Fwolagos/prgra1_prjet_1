#pragma once
#ifndef CINEMA_H
#define CINEMA_H

///Constantes

#define MOVIES 10
#define ROOMS 4
#define SCHEDULES 10
#define BOOKINGS 50
#define SALES 50

///Fin constantes 

#include <iostream>
using namespace std;
#include <string>


#include "movie.h"
#include "room.h"
#include "schedule.h"
#include "booking.h"
#include "sale.h"


class Cinema
{
private:
#pragma region Attributes
	Movie cinemaMovies[MOVIES];    /**< Arreglo de películas. */
	Room cinemaRooms[ROOMS];       /**< Arreglo de salas. */
	Schedule cinemaSchedules[SCHEDULES];  /**< Arreglo de horarios. */
	Booking cinemaBookings[BOOKINGS];     /**< Arreglo de reservas. */
	Sale cinemaSales[SALES];        /**< Arreglo de ventas. */
#pragma endregion	

#pragma region methods
	/**
 * @brief Imprime títulos decorados en la consola.
 *
 * Esta función imprime títulos decorados en la consola utilizando asteriscos
 * (`*`) como bordes. El título impreso depende del tipo especificado en el
 * parámetro `title`. Se limpia la pantalla al inicio de la función utilizando
 * `system("cls")` en sistemas Windows para mantener la salida del programa ordenada.
 *
 * @param title Una cadena de texto que especifica el tipo de título que se desea
 *              imprimir. Debe ser uno de los siguientes valores:
 *              - `"principal"`: Imprime el título "Bienvenidos al Cine Fwolagos".
 *              - `"archivo"`: Imprime el título "Acerca del Cine de Fwolagos".
 *              - `"mantenimiento"`: Imprime el título "Mantenimiento Cine Fwolagos".
 *              - `"reserva"`: Imprime el título "Reservaciones Cine Fwolagos".
 *              - `"venta"`: Imprime el título "Ventas Cine Fwolagos".
 *
 * @note La función utiliza `system("cls")` para limpiar la pantalla. Esto es específico
 *       de sistemas Windows. En otros sistemas operativos, considera utilizar
 *       `system("clear")` en su lugar.
 *
 * @warning La función no maneja errores si el tipo de título proporcionado no
 *          coincide con ninguno de los valores esperados.
 */
	void header(string);

	/**
	 * @brief Muestra información sobre el creador y permite salir o volver.
	 *
	 * Imprime el nombre del creador y espera una entrada del usuario. Si el usuario presiona
	 * 'q', intenta cerrar la terminal usando `system("exit")`. Presionar cualquier otra tecla
	 * regresa al menú anterior.
	 *
	 * @note El uso de `system("exit")` puede no cerrar la terminal en todos los sistemas.
	 */
	void about();

	/**
	 * @brief Ingresa un número y lo devuelve.
	 * Esta funcion evita que el programa falle al
	 * agregar una letra donde no van.
	 * @return Número ingresado por el usuario.
	 */
	int enterNumber();

	/**
	 * @brief Reserva un asiento para una película.
	 * @param idSchedule ID del horario.
	 * @param seatNumber Número del asiento.
	 * @return Asiento reservado.
	 */
	Seat reserveSeat(int, int);

	/**
	 * @brief Inicializa datos estáticos.
	 */
	void initialize();
#pragma endregion	

#pragma region Edit vectors
	void edit(string, string);
#pragma endregion

#pragma region Add in vectors
	/**
	 * @brief Agrega una película.
	 */
	void addMovie();

	/**
	 * @brief Agrega un horario.
	 */
	void addSchedule();

	/**
 * @brief Agrega una sala.
 */
	void addRoom();

	/**
 * @brief Agrega una reserva.
 */
	void addBooking();

	/**
	 * @brief Agrega una venta.
	 */
	void addSale();

#pragma endregion

#pragma region Search Algorithms

	/**
	 * @brief Busca un elemento por nombre en un vector.
	 * @param type Tipo de elemento.
	 * @param name Nombre del elemento.
	 * @return Índice del elemento encontrado.
	 */
	int searchInVectorByName(string, string);

	/**
* @brief Busca un elemento por ID en un vector.
* @param type Tipo de elemento.
* @param id ID del elemento.
* @return Índice del elemento encontrado.
*/
	int searchInVectorById(string, int);

	/**
 * @brief Busca un elemento por nombre.
 * @param type Tipo de elemento.
 * @param name Nombre del elemento.
 * @return Índice del elemento encontrado.
 */
	int searchByName(string, string);

	/**
	 * @brief Busca un elemento por ID en un vector.
	 * @param type Tipo de elemento.
	 * @param id ID del elemento.
	 * @return Índice del elemento encontrado.
	 */
	int	searchById(string, int);
#pragma endregion

#pragma region Show information
	/**
	 * @brief Imprime las películas.
	 */
	void printCinemaMovies();

	/**
 * @brief Imprime las salas.
 */
	void printCinemaRooms();

	/**
	 * @brief Imprime los horarios.
	 */
	void printCinemaSchedules();

	/**
	 * @brief Imprime las reservas.
	 */
	void printCinemaBookings();

	/**
	 * @brief Imprime las ventas.
	 */
	void printCinemaSales();
#pragma endregion


public:

#pragma region constructors
	/**
	 * @brief Constructor por defecto.
	 */
	Cinema();

	/**
	 * @brief Destructor.
	 */
	~Cinema();
#pragma endregion

#pragma region Sets
	/**
 * @brief Establece una película en una posición específica del cine.
 *
 * Esta función asigna un objeto de tipo `Movie` a una posición dada en el arreglo
 * de películas del cine. La posición debe ser un índice válido dentro del rango del
 * arreglo. Si la posición está fuera del rango, el comportamiento de la función no está definido.
 *
 * @param item Objeto de tipo `Movie` que se desea asignar a la posición especificada.
 * @param position Índice en el arreglo de películas donde se asignará el objeto `Movie`.
 *
 * @note Asegúrate de que `position` sea un índice válido para evitar errores.
 */
	void setCinemaMovies(Movie, int);// objeto y pocicion en el vector 

	/**
 * @brief Establece una sala en una posición específica del cine.
 *
 * Esta función asigna un objeto de tipo `Room` a una posición dada en el arreglo
 * de salas del cine. La posición debe ser un índice válido dentro del rango del
 * arreglo. Si la posición está fuera del rango, el comportamiento de la función no está definido.
 *
 * @param item Objeto de tipo `Room` que se desea asignar a la posición especificada.
 * @param position Índice en el arreglo de salas donde se asignará el objeto `Room`.
 *
 * @note Asegúrate de que `position` sea un índice válido para evitar errores.
 */
	void setCinemaRooms(Room, int);

	/**
 * @brief Establece un horario en una posición específica del cine.
 *
 * Esta función asigna un objeto de tipo `Schedule` a una posición dada en el arreglo
 * de horarios del cine. La posición debe ser un índice válido dentro del rango del
 * arreglo. Si la posición está fuera del rango, el comportamiento de la función no está definido.
 *
 * @param item Objeto de tipo `Schedule` que se desea asignar a la posición especificada.
 * @param position Índice en el arreglo de horarios donde se asignará el objeto `Schedule`.
 *
 * @note Asegúrate de que `position` sea un índice válido para evitar errores.
 */
	void setCinemaSchedules(Schedule, int);

	/**
 * @brief Establece una reserva en una posición específica del cine.
 *
 * Esta función asigna un objeto de tipo `Booking` a una posición dada en el arreglo
 * de reservas del cine. La posición debe ser un índice válido dentro del rango del
 * arreglo. Si la posición está fuera del rango, el comportamiento de la función no está definido.
 *
 * @param item Objeto de tipo `Booking` que se desea asignar a la posición especificada.
 * @param position Índice en el arreglo de reservas donde se asignará el objeto `Booking`.
 *
 * @note Asegúrate de que `position` sea un índice válido para evitar errores.
 */
	void setCinemaBooking(Booking, int);

	/**
 * @brief Establece una venta en una posición específica del cine.
 *
 * Esta función asigna un objeto de tipo `Sale` a una posición dada en el arreglo
 * de ventas del cine. La posición debe ser un índice válido dentro del rango del
 * arreglo. Si la posición está fuera del rango, el comportamiento de la función no está definido.
 *
 * @param item Objeto de tipo `Sale` que se desea asignar a la posición especificada.
 * @param position Índice en el arreglo de ventas donde se asignará el objeto `Sale`.
 *
 * @note Asegúrate de que `position` sea un índice válido para evitar errores.
 */
	void setCinemaSales(Sale, int);

#pragma endregion

#pragma region Gets
	/**
	 * @brief Obtiene una sala en una posición específica.
	 * @param position Índice de la sala.
	 * @return Sala en la posición especificada.
	 */
	Movie getCinemaMovies(int);//posicion del objeto a devolver

	/**
 * @brief Obtiene la película en una posición específica del cine.
 *
 * Esta función devuelve el objeto de tipo `Movie` ubicado en la posición dada
 * en el arreglo de películas del cine. La posición se debe pasar como un índice
 * válido dentro del rango del arreglo. Si la posición está fuera del rango,
 * el comportamiento de la función no está definido.
 *
 * @param position Índice del objeto `Movie` que se desea devolver.
 *
 * @return Devuelve el objeto `Movie` correspondiente a la posición especificada.
 *
 * @note Asegúrate de que `position` sea un índice válido para evitar errores.
 */
	Room getCinemaRooms(int);

	/**
	 * @brief Obtiene un horario en una posición específica.
	 * @param position Índice del horario.
	 * @return Horario en la posición especificada.
	 */
	Schedule getCinemaSchedules(int);

	/**
	 * @brief Obtiene una reserva en una posición específica.
	 * @param position Índice de la reserva.
	 * @return Reserva en la posición especificada.
	 */
	Booking getCinemaBookings(int);

	/**
	 * @brief Obtiene una venta en una posición específica.
	 * @param position Índice de la venta.
	 * @return Venta en la posición especificada.
	 */
	Sale getCinemaSales(int);
#pragma endregion	

#pragma region Public methods
	/**
 * @brief Muestra el menú principal.
 */
	void menu();
#pragma endregion

};
#endif

