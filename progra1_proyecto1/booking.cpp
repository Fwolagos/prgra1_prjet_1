#include "booking.h"

#pragma region Constructors
Booking::Booking(int bookingId, double totalPrice,int numberSeats, Schedule schedule) {
	this->schedule = schedule;
	if (numberSeats > LIMIT_SEATS) {
		numberSeats = LIMIT_SEATS;
	}
	for (int i = 0; i < LIMIT_SEATS; i++) {
		bookSeats[i] = Seat(i+1,"Reserved");
	}
	this->totalPrice = totalPrice;
	this->bookingId = bookingId;
}

Booking::Booking() {
	schedule = Schedule();
	for (int i = 0; i < LIMIT_SEATS; i++) {
		bookSeats[i] = Seat();
	}
	totalPrice = 0;
	bookingId = -1;
}
Booking::~Booking() {

}
#pragma endregion

#pragma region Sets
void Booking::setSchedule(Schedule item) {
	schedule = item;
}


void Booking::setBookSeats(Seat item, int position) {/// objeto y posicion 
	bookSeats[position] = item;
}

void Booking::settotalPrice(double totalvalue) {
	totalPrice = totalvalue;
}

void Booking::setBookingId(int id) {
	bookingId = id;
}
#pragma endregion

#pragma region Gets
Schedule Booking::getSchedule() {
	return schedule;
}

Seat Booking::getBookSeats(int position) {///posicion
	return bookSeats[position];
}

double Booking::getTotalPrice() {
	return totalPrice;
}

int Booking::getBookingId() {
	return bookingId;
}
#pragma endregion

