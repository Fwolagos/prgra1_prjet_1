#include "cinema.h"

#pragma region Constructors
Cinema::Cinema() {
	for (int i = 0; i < MOVIES; i++) {
		cinemaMovies[i] = Movie();
	}
	for (int i = 0; i < ROOMS; i++) {
		cinemaRooms[i] = Room();
	}
	for (int i = 0; i < SCHEDULES; i++) {
		cinemaSchedules[i] = Schedule();
	}
	for (int i = 0; i < BOOKINGS ; i++) {
		cinemaBookings[i] = Booking();
	}
	for (int i = 0; i < SALES; i++) {
		cinemaSales[i] = Sale();
	}
}

//Cinema::Cinema(Movie, Room, Schedule, Booking, Sale);

Cinema::~Cinema() {

}
#pragma endregion

#pragma region Sets
void Cinema::setCinemaMovies(Movie item, int position) {// objeto y pocicion en el vector
	cinemaMovies[position] = item;
}

void Cinema::setCinemaRooms(Room item, int position) {
	cinemaRooms[position] = item;
}

void Cinema::setCinemaSchedules(Schedule item, int position) {
	cinemaSchedules[position] = item;
}

void Cinema::setCinemaBooking(Booking item, int position) {
	cinemaBookings[position] = item;
}

void Cinema::setCinemaSales(Sale item, int position) {
	cinemaSales[position] = item;
}
#pragma endregion

#pragma region Gets
Movie Cinema::getCinemaMovies(int position) {//posicion del objeto a devolver
	return cinemaMovies[position];
}

Room Cinema::getCinemaRooms(int position) {
	return cinemaRooms[position];
}

Schedule Cinema::getCinemaSchedules(int position) {
	return cinemaSchedules[position];
}
	
Booking Cinema::getCinemaBookings(int position) {
	return cinemaBookings[position];
}

Sale Cinema::getCinemaSales(int position) {
	return cinemaSales[position];
}
#pragma endregion

#pragma region Methods

#pragma endregion

