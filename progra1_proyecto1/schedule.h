#pragma once
#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <iostream>
#include "movie.h"
#include "room.h"

using namespace std;

class Schedule
{
private:
    string date;
    string startHour;
    string endHour;
    Movie movie; 
    Room room; 

public:
    Schedule(string, string, string, Movie, Room);
    Schedule();
    ~Schedule();

    void setDate(string);
    void setStartHour(string);
    void setEndHour(string);
    void setMovie(Movie);
    void setRoom(Room);

    string getDate();
    string getStartHour();
    string getEndHour();
    Movie getMovie();
    Room getRoom();

};
#endif

