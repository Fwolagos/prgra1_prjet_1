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

#include "movie.h"
#include "room.h"
#include "schedule.h"
#include "booking.h"
#include "sale.h"


class Cinema
{
private:
	Movie cinemaMovies[MOVIES];
	Room cinemaRooms[ROOMS];
	Schedule cinemaSchedules[SCHEDULES];
	Booking cinemaBookings[BOOKINGS];
	Sale cinemaSales[SALES];
public:

#pragma region constructors
	Cinema();
	//Cinema(Movie, Room, Schedule, Booking, Sale);
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


	Schedule getCinemaSchedules(int);
	Booking getCinemaBookings(int);
	Sale getCinemaSales(int);
#pragma endregion	

};
#endif

