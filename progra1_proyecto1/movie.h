#pragma once

#ifndef MOVIE_H
#define MOVIE_H	

#include <iostream>
using namespace std;

/**
 * @brief Clase que representa una película en el cine.
 */
class Movie
{
private:
	string name;      /**< Nombre de la película. */
	int duration;     /**< Duración de la película en minutos. */
	string synapse;   /**< Sinopsis de la película. */
	int reviews;      /**< Número de reseñas o calificación. */
	string language;  /**< Idioma de la película. */

public:
	//===============================builders
	 /**
	 * @brief Constructor por defecto.
	 */
	Movie();

	/**
	 * @brief Constructor parametrizado.
	 * @param name Nombre de la película.
	 * @param duration Duración en minutos.
	 * @param synapse Sinopsis de la película.
	 * @param reviews Número de reseñas o calificación.
	 * @param language Idioma de la película.
	 */
	Movie(string, int, string, int, string);

	/**
	 * @brief Destructor.
	 */
	~Movie();
	//===============================gets
	/**
	 * @brief Obtiene el nombre de la película.
	 * @return Nombre de la película.
	 */
	string getName();

	/**
	 * @brief Obtiene la duración de la película.
	 * @return Duración en minutos.
	 */
	int getDuration();

	/**
	 * @brief Obtiene la sinopsis de la película.
	 * @return Sinopsis de la película.
	 */
	string getSynapse();

	/**
	 * @brief Obtiene el número de reseñas o calificación.
	 * @return Número de reseñas o calificación.
	 */
	int getReviews();

	/**
	 * @brief Obtiene el idioma de la película.
	 * @return Idioma de la película.
	 */
	string getLanguage();
	//===============================sets
	/**
	 * @brief Establece el nombre de la película.
	 * @param name Nombre de la película.
	 */
	void setName(string);

	/**
	 * @brief Establece la duración de la película.
	 * @param duration Duración en minutos.
	 */
	void setDuration(int);

	/**
	 * @brief Establece la sinopsis de la película.
	 * @param synapse Sinopsis de la película.
	 */
	void setSynapse(string);

	/**
	 * @brief Establece el número de reseñas o calificación.
	 * @param reviews Número de reseñas o calificación.
	 */
	void setReviews(int);

	/**
	 * @brief Establece el idioma de la película.
	 * @param language Idioma de la película.
	 */
	void setLanguage(string);

};
#endif