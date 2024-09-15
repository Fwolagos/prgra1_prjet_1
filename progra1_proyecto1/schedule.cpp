#include "schedule.h"


#pragma region Constructors
Schedule::Schedule(int idSchedule,string date, string startHour, string endHour, Movie movie, Room room) {
	this->idSchedule = idSchedule;
	this->date = date;
	this->startHour = startHour;
	this->endHour = endHour;
	this->movie = movie;
	this->room = room;

}
Schedule::Schedule() {
	idSchedule = -1;
	date = "00/00/00";
	startHour = "24:60";
	endHour = "24:60";
	movie = Movie();
	room = Room();
}
Schedule::~Schedule() {

}
#pragma endregion

#pragma region Sets
void Schedule::setIdSchedule(int idSchedule) {
	this->idSchedule = idSchedule;
}

void Schedule::setDate(string date) {
	this->date = date;
}

void Schedule::setStartHour(string startHour) {
	this->startHour = startHour;
}

void Schedule::setEndHour(string endHour) {
	this->endHour = endHour;
}

void Schedule::setMovie(Movie movie) {
	this->movie = movie;
}

void Schedule::setRoom(Room room) {
	this->room = room;
}
#pragma endregion

#pragma region Gets

int Schedule::getIdSchedule() {
	return idSchedule;
}

string Schedule::getDate() {
	return date;
}

string Schedule::getStartHour() {
	return startHour;
}

string Schedule::getEndHour() {
	return endHour;
}

Movie Schedule::getMovie() {
	return movie;
}

Room Schedule::getRoom() {
	return room;
}
#pragma endregion



