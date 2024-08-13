#pragma once
#ifndef SEAT_H
#define SEAT_H
#include <iostream>
using namespace std;


class Seat
{
private:
    int id;
    string state; //Disponible | Reservada | Vendida

public:
    Seat();
    ~Seat();
};
#endif
