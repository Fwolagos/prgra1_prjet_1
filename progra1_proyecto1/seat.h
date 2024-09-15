#pragma once
#ifndef SEAT_H
#define SEAT_H
#include <iostream>
using namespace std;

/**
 * @brief Clase que representa un asiento en el sistema de cine.
 */
class Seat
{
private:
    int id;             /**< ID único del asiento. */
    string state;       /**< Estado del asiento: "Available", "Reserved", o "Sold". */


public:
    //===============================constructores
   /**
    * @brief Constructor por defecto de la clase Seat.
    */
    Seat();

    /**
     * @brief Constructor parametrizado de la clase Seat.
     * @param id ID único del asiento.
     * @param state Estado del asiento: "Available", "Reserved", o "Sold".
     */
    Seat(int, string);

    /**
     * @brief Destructor de la clase Seat.
     */
    ~Seat();

    //===============================sets
   /**
    * @brief Establece el ID del asiento.
    * @param id ID único del asiento.
    */
    void setId(int);

    /**
     * @brief Establece el estado del asiento.
     * @param state Estado del asiento: "Available", "Reserved", o "Sold".
     */
    void setState(string);

    //===============================gets
   /**
    * @brief Obtiene el ID del asiento.
    * @return ID único del asiento.
    */
    int getId();

    /**
     * @brief Obtiene el estado del asiento.
     * @return Estado del asiento: "Available", "Reserved", o "Sold".
     */
    string getState();
};
#endif
