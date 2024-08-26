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


	Schedule getCinemaSchedules(int);
	Booking getCinemaBookings(int);
	Sale getCinemaSales(int);
#pragma endregion	

};
#endif

