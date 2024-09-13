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
	int idCostumer;
	int cartNumber;
public:
	Sale();
	Sale(Booking, int, int);
	~Sale();

	void setBooking(Booking);
	void setIdCostumer(int);
	void setCartNumber(int);

	Booking getBooking();
	int getIdCostumer();
	int getCartNumber();

};
#endif

