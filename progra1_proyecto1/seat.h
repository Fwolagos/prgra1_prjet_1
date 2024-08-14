#pragma once
#ifndef SEAT_H
#define SEAT_H
#include <iostream>
using namespace std;


class Seat
{
private:
    int id;
    string state; //Available | Reserved | Sold

public:
    Seat();
    Seat(int, string);
    ~Seat();

    void setId(int);
    void setState(string);

    int getId();
    string getState();
};
#endif
