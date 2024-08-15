#pragma once
#ifndef BOOKING_H
#define BOOKING_H
#define LIMIT_SEATS 5

#include <iostream>
using namespace std;
#include "seat.h"
#include "schedule.h"

class Booking
{
private:
    Schedule schedule; //*
    Seat bookSeats[5]; //Limite de 5 asientos por reserva
    double totalPrice;
    int bookingId;

public:
};
#endif
