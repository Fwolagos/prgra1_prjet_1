#pragma once

#ifndef MOVIE_H
#define MOVIE_H	

#include <iostream>
using namespace std;

/**
 * @brief Clase que representa una pel�cula en el cine.
 */
class Movie
{
private:
	string name;      /**< Nombre de la pel�cula. */
	int duration;     /**< Duraci�n de la pel�cula en minutos. */
	string synapse;   /**< Sinopsis de la pel�cula. */
	int reviews;      /**< N�mero de rese�as o calificaci�n. */
	string language;  /**< Idioma de la pel�cula. */

public:
	//===============================builders
	 /**
	 * @brief Constructor por defecto.
	 */
	Movie();

	/**
	 * @brief Constructor parametrizado.
	 * @param name Nombre de la pel�cula.
	 * @param duration Duraci�n en minutos.
	 * @param synapse Sinopsis de la pel�cula.
	 * @param reviews N�mero de rese�as o calificaci�n.
	 * @param language Idioma de la pel�cula.
	 */
	Movie(string, int, string, int, string);

	/**
	 * @brief Destructor.
	 */
	~Movie();
	//===============================gets
	/**
	 * @brief Obtiene el nombre de la pel�cula.
	 * @return Nombre de la pel�cula.
	 */
	string getName();

	/**
	 * @brief Obtiene la duraci�n de la pel�cula.
	 * @return Duraci�n en minutos.
	 */
	int getDuration();

	/**
	 * @brief Obtiene la sinopsis de la pel�cula.
	 * @return Sinopsis de la pel�cula.
	 */
	string getSynapse();

	/**
	 * @brief Obtiene el n�mero de rese�as o calificaci�n.
	 * @return N�mero de rese�as o calificaci�n.
	 */
	int getReviews();

	/**
	 * @brief Obtiene el idioma de la pel�cula.
	 * @return Idioma de la pel�cula.
	 */
	string getLanguage();
	//===============================sets
	/**
	 * @brief Establece el nombre de la pel�cula.
	 * @param name Nombre de la pel�cula.
	 */
	void setName(string);

	/**
	 * @brief Establece la duraci�n de la pel�cula.
	 * @param duration Duraci�n en minutos.
	 */
	void setDuration(int);

	/**
	 * @brief Establece la sinopsis de la pel�cula.
	 * @param synapse Sinopsis de la pel�cula.
	 */
	void setSynapse(string);

	/**
	 * @brief Establece el n�mero de rese�as o calificaci�n.
	 * @param reviews N�mero de rese�as o calificaci�n.
	 */
	void setReviews(int);

	/**
	 * @brief Establece el idioma de la pel�cula.
	 * @param language Idioma de la pel�cula.
	 */
	void setLanguage(string);

};
#endif