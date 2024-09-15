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
    Seat bookSeats[LIMIT_SEATS]; //Limite de 5 asientos por reserva
    double totalPrice;
    int bookingId;

public:
    Booking();
    ~Booking();
    void setSchedule(Schedule);
    void setBookSeats(Seat, int);/// objeto y posicion 
    void settotalPrice(double);
    void setBookingId(int);
    Schedule getSchedule();
    Seat getBookSeats(int);///posicion
    double getTotalPrice();
    int getBookingId();
    
};
#endif
