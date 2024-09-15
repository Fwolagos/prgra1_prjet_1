#include "room.h"
#include <iostream>


#pragma region Builders
Room::Room(int id, double price) {
	this->id = id;
	seatsNumber = MATRIX_SEAT * MATRIX_SEAT;
	this->price = price;
	for (int i = 0; i < MATRIX_SEAT * MATRIX_SEAT; i++) {
		roomSeats[i / MATRIX_SEAT][i % MATRIX_SEAT].setId(i);
		roomSeats[i / MATRIX_SEAT][i % MATRIX_SEAT].setState("Available");
	}
}

Room::Room() {
	id = -1; /// las id van de 0 en adelante y si hay un -1 indica que es por defabrica que esta vacio o sin editar no se 
	price = PRICE;
	seatsNumber = MATRIX_SEAT * MATRIX_SEAT;
	for (int i = 0; i < MATRIX_SEAT * MATRIX_SEAT; i++) {
		roomSeats[i / MATRIX_SEAT][i % MATRIX_SEAT].setId(i);
		roomSeats[i / MATRIX_SEAT][i % MATRIX_SEAT].setState("Available");
	}
}

Room::~Room() {}
#pragma endregion


#pragma region Gets
int Room::getId() {
	return id;
}

int Room::getSeatsNumber() {
	return seatsNumber;
}

double Room::getPrice() {
	return price;
}

Seat Room::getRoomSeats(int row, int column) {//row and column
	return roomSeats[row][column];
}
#pragma endregion


#pragma region Sets
void Room::setId(int id) {
	this->id = id;
}

void Room::setSeatsNumber(int seatsNumber) {
	this->seatsNumber = seatsNumber;
}

void Room::setPrice(double price) {
	this->price = price;
}

void Room::setroomSeats(Seat roomSeat, int row, int column) {//row and column
	this->roomSeats[row][column] = roomSeat;
}
#pragma endregion



