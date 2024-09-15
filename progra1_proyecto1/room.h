#pragma once
#ifndef ROOM_H
#define ROOM_H
#include "seat.h"
#include <iostream>
#define MATRIX_SEAT 10

class Room
{
private:
    int id;
    int seatsNumber;
    double price;
    Seat roomSeats[MATRIX_SEAT][MATRIX_SEAT];

public:
    Room(int,double);
    Room();
    ~Room();


    void setId(int);
    void setSeatsNumber(int);
    void setPrice(double);
    void setroomSeats(Seat,int,int);//row and column

    int getId();
    int getSeatsNumber();
    double getPrice();
    Seat getRoomSeats(int,int);//row and column
};
#endif

