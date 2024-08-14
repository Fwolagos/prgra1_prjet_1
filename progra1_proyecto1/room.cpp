#include "room.h"
#include <iostream>


#pragma region Builders
Room::Room(int id, double price) {
	this->id = id;
	seatsNumber = 100;
	this->price = price;
	for (int i = 0; i < MATRIX_SEAT * MATRIX_SEAT; i++) {
		roomSeats[i / MATRIX_SEAT][i % MATRIX_SEAT].setId(i);
		roomSeats[i / MATRIX_SEAT][i % MATRIX_SEAT].setState("available");
	}
}

Room::Room() {
	id = rand() % 100;
	seatsNumber = 100;
	for (int i = 0; i < MATRIX_SEAT * MATRIX_SEAT; i++) {
		roomSeats[i / MATRIX_SEAT][i % MATRIX_SEAT].setId(i);
		roomSeats[i / MATRIX_SEAT][i % MATRIX_SEAT].setState("available");
	}
}

Room::~Room() {}
#pragma endregion


#pragma region Gets

#pragma endregion


#pragma region Sets

#pragma endregion



