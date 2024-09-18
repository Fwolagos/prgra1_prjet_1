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
	Movie cinemaMovies[MOVIES];    /**< Arreglo de pel�culas. */
	Room cinemaRooms[ROOMS];       /**< Arreglo de salas. */
	Schedule cinemaSchedules[SCHEDULES];  /**< Arreglo de horarios. */
	Booking cinemaBookings[BOOKINGS];     /**< Arreglo de reservas. */
	Sale cinemaSales[SALES];        /**< Arreglo de ventas. */
#pragma endregion	

#pragma region methods
	/**
 * @brief Imprime t�tulos decorados en la consola.
 *
 * Esta funci�n imprime t�tulos decorados en la consola utilizando asteriscos
 * (`*`) como bordes. El t�tulo impreso depende del tipo especificado en el
 * par�metro `title`. Se limpia la pantalla al inicio de la funci�n utilizando
 * `system("cls")` en sistemas Windows para mantener la salida del programa ordenada.
 *
 * @param title Una cadena de texto que especifica el tipo de t�tulo que se desea
 *              imprimir. Debe ser uno de los siguientes valores:
 *              - `"principal"`: Imprime el t�tulo "Bienvenidos al Cine Fwolagos".
 *              - `"archivo"`: Imprime el t�tulo "Acerca del Cine de Fwolagos".
 *              - `"mantenimiento"`: Imprime el t�tulo "Mantenimiento Cine Fwolagos".
 *              - `"reserva"`: Imprime el t�tulo "Reservaciones Cine Fwolagos".
 *              - `"venta"`: Imprime el t�tulo "Ventas Cine Fwolagos".
 *
 * @note La funci�n utiliza `system("cls")` para limpiar la pantalla. Esto es espec�fico
 *       de sistemas Windows. En otros sistemas operativos, considera utilizar
 *       `system("clear")` en su lugar.
 *
 * @warning La funci�n no maneja errores si el tipo de t�tulo proporcionado no
 *          coincide con ninguno de los valores esperados.
 */
	void header(string);

	/**
	 * @brief Muestra informaci�n sobre el creador y permite salir o volver.
	 *
	 * Imprime el nombre del creador y espera una entrada del usuario. Si el usuario presiona
	 * 'q', intenta cerrar la terminal usando `system("exit")`. Presionar cualquier otra tecla
	 * regresa al men� anterior.
	 *
	 * @note El uso de `system("exit")` puede no cerrar la terminal en todos los sistemas.
	 */
	void about();

	/**
	 * @brief Ingresa un n�mero y lo devuelve.
	 * Esta funcion evita que el programa falle al
	 * agregar una letra donde no van.
	 * @return N�mero ingresado por el usuario.
	 */
	int enterNumber();

	/**
	 * @brief Reserva un asiento para una pel�cula.
	 * @param idSchedule ID del horario.
	 * @param seatNumber N�mero del asiento.
	 * @return Asiento reservado.
	 */
	Seat reserveSeat(int, int);

	/**
	 * @brief Inicializa datos est�ticos.
	 */
	void initialize();
#pragma endregion	

#pragma region Edit vectors
	void edit(string, string);
#pragma endregion

#pragma region Add in vectors
	/**
	 * @brief Agrega una pel�cula.
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
	 * @return �ndice del elemento encontrado.
	 */
	int searchInVectorByName(string, string);

	/**
* @brief Busca un elemento por ID en un vector.
* @param type Tipo de elemento.
* @param id ID del elemento.
* @return �ndice del elemento encontrado.
*/
	int searchInVectorById(string, int);

	/**
 * @brief Busca un elemento por nombre.
 * @param type Tipo de elemento.
 * @param name Nombre del elemento.
 * @return �ndice del elemento encontrado.
 */
	int searchByName(string, string);

	/**
	 * @brief Busca un elemento por ID en un vector.
	 * @param type Tipo de elemento.
	 * @param id ID del elemento.
	 * @return �ndice del elemento encontrado.
	 */
	int	searchById(string, int);
#pragma endregion

#pragma region Show information
	/**
	 * @brief Imprime las pel�culas.
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
 * @brief Establece una pel�cula en una posici�n espec�fica del cine.
 *
 * Esta funci�n asigna un objeto de tipo `Movie` a una posici�n dada en el arreglo
 * de pel�culas del cine. La posici�n debe ser un �ndice v�lido dentro del rango del
 * arreglo. Si la posici�n est� fuera del rango, el comportamiento de la funci�n no est� definido.
 *
 * @param item Objeto de tipo `Movie` que se desea asignar a la posici�n especificada.
 * @param position �ndice en el arreglo de pel�culas donde se asignar� el objeto `Movie`.
 *
 * @note Aseg�rate de que `position` sea un �ndice v�lido para evitar errores.
 */
	void setCinemaMovies(Movie, int);// objeto y pocicion en el vector 

	/**
 * @brief Establece una sala en una posici�n espec�fica del cine.
 *
 * Esta funci�n asigna un objeto de tipo `Room` a una posici�n dada en el arreglo
 * de salas del cine. La posici�n debe ser un �ndice v�lido dentro del rango del
 * arreglo. Si la posici�n est� fuera del rango, el comportamiento de la funci�n no est� definido.
 *
 * @param item Objeto de tipo `Room` que se desea asignar a la posici�n especificada.
 * @param position �ndice en el arreglo de salas donde se asignar� el objeto `Room`.
 *
 * @note Aseg�rate de que `position` sea un �ndice v�lido para evitar errores.
 */
	void setCinemaRooms(Room, int);

	/**
 * @brief Establece un horario en una posici�n espec�fica del cine.
 *
 * Esta funci�n asigna un objeto de tipo `Schedule` a una posici�n dada en el arreglo
 * de horarios del cine. La posici�n debe ser un �ndice v�lido dentro del rango del
 * arreglo. Si la posici�n est� fuera del rango, el comportamiento de la funci�n no est� definido.
 *
 * @param item Objeto de tipo `Schedule` que se desea asignar a la posici�n especificada.
 * @param position �ndice en el arreglo de horarios donde se asignar� el objeto `Schedule`.
 *
 * @note Aseg�rate de que `position` sea un �ndice v�lido para evitar errores.
 */
	void setCinemaSchedules(Schedule, int);

	/**
 * @brief Establece una reserva en una posici�n espec�fica del cine.
 *
 * Esta funci�n asigna un objeto de tipo `Booking` a una posici�n dada en el arreglo
 * de reservas del cine. La posici�n debe ser un �ndice v�lido dentro del rango del
 * arreglo. Si la posici�n est� fuera del rango, el comportamiento de la funci�n no est� definido.
 *
 * @param item Objeto de tipo `Booking` que se desea asignar a la posici�n especificada.
 * @param position �ndice en el arreglo de reservas donde se asignar� el objeto `Booking`.
 *
 * @note Aseg�rate de que `position` sea un �ndice v�lido para evitar errores.
 */
	void setCinemaBooking(Booking, int);

	/**
 * @brief Establece una venta en una posici�n espec�fica del cine.
 *
 * Esta funci�n asigna un objeto de tipo `Sale` a una posici�n dada en el arreglo
 * de ventas del cine. La posici�n debe ser un �ndice v�lido dentro del rango del
 * arreglo. Si la posici�n est� fuera del rango, el comportamiento de la funci�n no est� definido.
 *
 * @param item Objeto de tipo `Sale` que se desea asignar a la posici�n especificada.
 * @param position �ndice en el arreglo de ventas donde se asignar� el objeto `Sale`.
 *
 * @note Aseg�rate de que `position` sea un �ndice v�lido para evitar errores.
 */
	void setCinemaSales(Sale, int);

#pragma endregion

#pragma region Gets
	/**
	 * @brief Obtiene una sala en una posici�n espec�fica.
	 * @param position �ndice de la sala.
	 * @return Sala en la posici�n especificada.
	 */
	Movie getCinemaMovies(int);//posicion del objeto a devolver

	/**
 * @brief Obtiene la pel�cula en una posici�n espec�fica del cine.
 *
 * Esta funci�n devuelve el objeto de tipo `Movie` ubicado en la posici�n dada
 * en el arreglo de pel�culas del cine. La posici�n se debe pasar como un �ndice
 * v�lido dentro del rango del arreglo. Si la posici�n est� fuera del rango,
 * el comportamiento de la funci�n no est� definido.
 *
 * @param position �ndice del objeto `Movie` que se desea devolver.
 *
 * @return Devuelve el objeto `Movie` correspondiente a la posici�n especificada.
 *
 * @note Aseg�rate de que `position` sea un �ndice v�lido para evitar errores.
 */
	Room getCinemaRooms(int);

	/**
	 * @brief Obtiene un horario en una posici�n espec�fica.
	 * @param position �ndice del horario.
	 * @return Horario en la posici�n especificada.
	 */
	Schedule getCinemaSchedules(int);

	/**
	 * @brief Obtiene una reserva en una posici�n espec�fica.
	 * @param position �ndice de la reserva.
	 * @return Reserva en la posici�n especificada.
	 */
	Booking getCinemaBookings(int);

	/**
	 * @brief Obtiene una venta en una posici�n espec�fica.
	 * @param position �ndice de la venta.
	 * @return Venta en la posici�n especificada.
	 */
	Sale getCinemaSales(int);
#pragma endregion	

#pragma region Public methods
	/**
 * @brief Muestra el men� principal.
 */
	void menu();
#pragma endregion

};
#endif

