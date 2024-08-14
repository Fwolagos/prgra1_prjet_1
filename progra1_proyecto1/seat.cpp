#include "seat.h"
#include <iostream>

#pragma region Builts
Seat::Seat(int id, string state) {
	this->id = id;
	this->state = state;

}

Seat::Seat() {
	id = 0;
	state = "disponible";

}
Seat::~Seat() {

}
#pragma endregion

#pragma region Sets
void Seat::setId(int id) {
	this->id = id;
}

void Seat::setState(string state) {
	this->state = state;
}
#pragma endregion

#pragma region Gets
int Seat::getId() {
	return id;
}

string Seat::getState() {
	return state;
}
#pragma endregion








