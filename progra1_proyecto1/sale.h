#pragma once
#ifndef SALE_H
#define SALE_H	

#include <iostream>
using namespace std;
#include "booking.h"

/**
 * @brief Clase que representa una venta en el sistema de cine.
 */
class Sale
{
private:
	Booking booking;      /**< Objeto Booking asociado a la venta. */
	int idCostumer;       /**< ID del cliente que realizó la compra. */
	int cartNumber;       /**< Número de la tarjeta utilizada para la compra. */
public:
	//===============================constructores
	/**
	 * @brief Constructor por defecto de la clase Sale.
	 */
	Sale();

	/**
	 * @brief Constructor parametrizado de la clase Sale.
	 * @param booking Objeto Booking asociado a la venta.
	 * @param idCostumer ID del cliente que realizó la compra.
	 * @param cartNumber Número de la tarjeta utilizada para la compra.
	 */
	Sale(Booking, int, int);

	/**
	 * @brief Destructor de la clase Sale.
	 */
	~Sale();


	//===============================sets
   /**
	* @brief Establece el objeto Booking asociado a la venta.
	* @param booking Objeto Booking a asignar.
	*/
	void setBooking(Booking);

	/**
	* @brief Establece el ID del cliente que realizó la compra.
	* @param idCostumer ID del cliente.
	*/
	void setIdCostumer(int);

	/**
	 * @brief Establece el número de tarjeta utilizado en la venta.
	 * @param cartNumber Número de la tarjeta.
	 */
	void setCartNumber(int);

	//===============================gets
	/**
	 * @brief Obtiene el objeto Booking asociado a la venta.
	 * @return Objeto Booking correspondiente a la venta.
	 */
	Booking getBooking();

	/**
	 * @brief Obtiene el ID del cliente que realizó la compra.
	 * @return ID del cliente.
	 */
	int getIdCostumer();

	/**
	 * @brief Obtiene el número de tarjeta utilizado en la venta.
	 * @return Número de tarjeta.
	 */
	int getCartNumber();

};
#endif

