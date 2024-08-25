#include "sale.h"

#pragma region Constructors
Sale::Sale() {
	booking = Booking();
	idCostumer = rand() % 1000;
	cartNumber = rand() % 1000;
}

Sale::Sale(Booking booking, string idCostumer, string cartNumber) {
	this->booking = booking;
	this->idCostumer = idCostumer;
	this->cartNumber = cartNumber;
}

Sale::~Sale() {

}
#pragma endregion

#pragma region Sets
void Sale::setBooking(Booking booking) {
	this->booking = booking;
}

void Sale::setIdCostumer(string idCostumer) {
	this->idCostumer = idCostumer;
}

void Sale::setCartNumber(string cartNumber) {
	this->cartNumber = cartNumber;
}
#pragma endregion

#pragma region Gets
Booking Sale::getBooking() {
	return booking;
}

string Sale::getIdCostumer() {
	return idCostumer;
}

string Sale::getCartNumber() {
	return cartNumber;
}
#pragma endregion

