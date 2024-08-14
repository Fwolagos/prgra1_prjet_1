#include "room.h"
#include <iostream>


#pragma region Builders

#pragma endregion
Room::Room(int id, int seatsNumber, double price) {
	this->id = id;
	this->seatsNumber = seatsNumber;
	this->price = price;
	for (int i = 0; i < MATRIX_SEAT * MATRIX_SEAT; i++) {
		roomSeats[i/MATRIX_SEAT][i%MATRIX_SEAT]
	}
}

#pragma region Gets

#pragma endregion


#pragma region Sets

#pragma endregion



