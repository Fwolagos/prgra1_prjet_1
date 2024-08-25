#pragma once
#ifndef SALE_H
#define SALE_H	

#include <iostream>
using namespace std;
#include "booking.h"


class Sale
{
private:
	Booking booking;
	string idCostumer;
	string cartNumber;
public:
	Sale();
	Sale(Booking, string, string);
	~Sale();

	void setBooking(Booking);
	void setIdCostumer(string);
	void setCartNumber(string);

	Booking getBooking();
	string getIdCostumer();
	string getCartNumber();

};
#endif

