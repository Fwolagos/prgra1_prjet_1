#pragma once
#ifndef ROOM_H
#define ROOM_H
#include "seat.h"
#include <iostream>
#define MATRIX_SEAT 10
#define PRICE 5000

/**
 * @brief Clase que representa una sala de cine.
 */
class Room
{
private:
    int id;              /**< ID de la sala de cine. */
    int seatsNumber;      /**< N�mero total de asientos en la sala. */
    double price;         /**< Precio por asiento. */
    Seat roomSeats[MATRIX_SEAT][MATRIX_SEAT]; /**< Matriz de asientos en la sala. */

public:
    //===============================constructores
    /**
     * @brief Constructor parametrizado de la sala.
     * @param id Identificador �nico de la sala.
     * @param price Precio de cada asiento.
     */
    Room(int id, double price);

    /**
     * @brief Constructor por defecto.
     */
    Room();

    /**
     * @brief Destructor.
     */
    ~Room();

    //===============================sets
    /**
     * @brief Establece el ID de la sala.
     * @param id Identificador �nico de la sala.
     */
    void setId(int id);

    /**
     * @brief Establece el n�mero de asientos en la sala.
     * @param seatsNumber N�mero total de asientos.
     */
    void setSeatsNumber(int seatsNumber);

    /**
     * @brief Establece el precio de cada asiento.
     * @param price Precio de cada asiento.
     */
    void setPrice(double price);

    /**
     * @brief Establece un asiento espec�fico en la sala.
     * @param seat Objeto Seat a asignar.
     * @param row Fila del asiento.
     * @param column Columna del asiento.
     */
    void setroomSeats(Seat seat, int row, int column);

    //===============================gets
    /**
     * @brief Obtiene el ID de la sala.
     * @return ID de la sala.
     */
    int getId();

    /**
     * @brief Obtiene el n�mero de asientos en la sala.
     * @return N�mero total de asientos.
     */
    int getSeatsNumber();

    /**
     * @brief Obtiene el precio de cada asiento.
     * @return Precio por asiento.
     */
    double getPrice();

    /**
     * @brief Obtiene un asiento espec�fico de la sala.
     * @param row Fila del asiento.
     * @param column Columna del asiento.
     * @return Objeto Seat correspondiente.
     */
    Seat getRoomSeats(int row, int column);
};
#endif