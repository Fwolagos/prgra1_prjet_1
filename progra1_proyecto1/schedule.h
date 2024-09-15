#pragma once
#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <iostream>
#include "movie.h"
#include "room.h"

using namespace std;

/**
 * @brief Clase que representa un horario en el sistema de cine.
 */
class Schedule
{
private:
    int idSchedule;      /**< ID �nico para el horario. */
    string date;         /**< Fecha del horario en formato "DD/MM/YY". */
    string startHour;    /**< Hora de inicio de la pel�cula en el horario. */
    string endHour;      /**< Hora de fin de la pel�cula en el horario. */
    Movie movie;         /**< Objeto Movie asociado al horario. */
    Room room;           /**< Objeto Room asociado al horario. */

public:

    //===============================constructores
    /**
     * @brief Constructor parametrizado de la clase Schedule.
     * @param idSchedule ID �nico para el horario.
     * @param date Fecha del horario en formato "DD/MM/YY".
     * @param startHour Hora de inicio de la pel�cula.
     * @param endHour Hora de fin de la pel�cula.
     * @param movie Objeto Movie asociado al horario.
     * @param room Objeto Room asociado al horario.
     */
    Schedule(int, string, string, string, Movie, Room);

    /**
     * @brief Constructor por defecto de la clase Schedule.
     */
    Schedule();

    /**
     * @brief Destructor de la clase Schedule.
     */
    ~Schedule();

    //===============================sets
    /**
     * @brief Establece el ID del horario.
     * @param idSchedule ID �nico del horario.
     */
    void setIdSchedule(int);

    /**
     * @brief Establece la fecha del horario.
     * @param date Fecha del horario en formato "DD/MM/YY".
     */
    void setDate(string);

    /**
     * @brief Establece la hora de inicio de la pel�cula.
     * @param startHour Hora de inicio.
     */
    void setStartHour(string);

    /**
     * @brief Establece la hora de fin de la pel�cula.
     * @param endHour Hora de fin.
     */
    void setEndHour(string);

    /**
     * @brief Establece la pel�cula asociada al horario.
     * @param movie Objeto Movie a asignar.
     */
    void setMovie(Movie);

    /**
     * @brief Establece la sala asociada al horario.
     * @param room Objeto Room a asignar.
     */
    void setRoom(Room);


    //===============================gets
   /**
    * @brief Obtiene el ID del horario.
    * @return ID �nico del horario.
    */
    int getIdSchedule();

    /**
    * @brief Obtiene la fecha del horario.
    * @return Fecha del horario.
    */
    string getDate();

    /**
     * @brief Obtiene la hora de inicio de la pel�cula.
     * @return Hora de inicio.
     */
    string getStartHour();

    /**
     * @brief Obtiene la hora de fin de la pel�cula.
     * @return Hora de fin.
     */
    string getEndHour();

    /**
    * @brief Obtiene la pel�cula asociada al horario.
    * @return Objeto Movie asociado.
    */
    Movie getMovie();

    /**
     * @brief Obtiene la sala asociada al horario.
     * @return Objeto Room asociado.
     */
    Room getRoom();

};
#endif

