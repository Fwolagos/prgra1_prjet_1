#include "sale.h"

#pragma region Constructors
Sale::Sale() {
	booking = Booking();
	idCostumer = -1;
	cartNumber = -1;
}

Sale::Sale(Booking booking, int idCostumer, int cartNumber) {
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

void Sale::setIdCostumer(int idCostumer) {
	this->idCostumer = idCostumer;
}

void Sale::setCartNumber(int cartNumber) {
	this->cartNumber = cartNumber;
}
#pragma endregion

#pragma region Gets
Booking Sale::getBooking() {
	return booking;
}

int Sale::getIdCostumer() {
	return idCostumer;
}

int Sale::getCartNumber() {
	return cartNumber;
}
#pragma endregion

