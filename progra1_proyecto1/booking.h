#pragma once
#ifndef BOOKING_H
#define BOOKING_H
#define LIMIT_SEATS 5


#include <iostream>
using namespace std;
#include "seat.h"
#include "schedule.h"

/**
 * @brief Clase que representa una reserva en el cine.
 */
class Booking
{
private:
	int bookingId;              /**< ID de la reserva. */
	Schedule schedule;          /**< Horario de la reserva. */
	Seat bookSeats[LIMIT_SEATS]; /**< Asientos reservados, máximo 5. */
	double totalPrice;          /**< Precio total de la reserva. */


public:
	/**
	* @brief Constructor parametrizado.
	* @param id ID de la reserva.
	* @param price Precio total de la reserva.
	* @param seatCount Número de asientos.
	* @param schedule Horario de la reserva.
	*/
	Booking(int, double, int, Schedule);

	/**
	* @brief Constructor por defecto.
	*/
	Booking();

	/**
	 * @brief Destructor.
	 */
	~Booking();

	/**
	 * @brief Establece el horario de la reserva.
	 * @param schedule Objeto de tipo Schedule.
	 */
	void setSchedule(Schedule);

	/**
	 * @brief Establece un asiento en una posición específica.
	 * @param seat Objeto de tipo Seat.
	 * @param position Índice del asiento a modificar.
	 */
	void setBookSeats(Seat, int);/// objeto y posicion 

	/**
	 * @brief Establece el precio total de la reserva.
	 * @param price Precio total.
	 */
	void settotalPrice(double);

	/**
	 * @brief Establece el ID de la reserva.
 * @param id ID de la reserva.
 */
	void setBookingId(int);

	/**
   * @brief Obtiene el horario de la reserva.
   * @return Horario de la reserva.
   */
	Schedule getSchedule();

	/**
	 * @brief Obtiene un asiento de la reserva.
	 * @param position Índice del asiento.
	 * @return Asiento en la posición especificada.
	 */
	Seat getBookSeats(int);///posicion

	/**
	 * @brief Obtiene el precio total de la reserva.
	 * @return Precio total.
	 */
	double getTotalPrice();

	/**
	 * @brief Obtiene el ID de la reserva.
	 * @return ID de la reserva.
	 */
	int getBookingId();

};
#endif
