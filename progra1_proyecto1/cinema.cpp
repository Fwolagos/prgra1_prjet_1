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
	for (int i = 0; i < BOOKINGS; i++) {
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
void Cinema::header(string title) {
	/// Tipos de titulos para imprimir
	/// titulo: principal
	/// titulo: archivo
	/// titulo: mantenimiento
	/// titulo: reserva
	/// titulo: venta

	system("cls");

	/// Titulo: principal
	if (title == "principal") {
		cout << endl;
		cout << "***************************************************************";
		cout << endl;
		cout << "*                Bienvenidos al Cine Fwolagos                 *" << endl;
		cout << endl;
		cout << "***************************************************************";
		cout << endl;

		return;
	}
	/// Titulo: archivo
	if (title == "archivo") {
		cout << endl;
		cout << "***************************************************************";
		cout << endl;
		cout << "*                Acerca del  Cine de Fwolagos                 *" << endl;
		cout << endl;
		cout << "***************************************************************";
		cout << endl;

		return;
	}
	/// Titulo: mantenimiento
	if (title == "mantenimiento") {
		cout << endl;
		cout << "***************************************************************";
		cout << endl;
		cout << "*                Mantenimiento Cine Fwolagos                  *" << endl;
		cout << endl;
		cout << "***************************************************************";
		cout << endl;

		return;
	}
	/// Titulo: reserva
	if (title == "reserva") {
		cout << endl;
		cout << "***************************************************************";
		cout << endl;
		cout << "*                Reservaciones Cine Fwolagos                  *" << endl;
		cout << endl;
		cout << "***************************************************************";
		cout << endl;

		return;
	}
	/// Titulo: venta
	if (title == "venta") {
		cout << endl;
		cout << "***************************************************************";
		cout << endl;
		cout << "*                     Ventas Cine Fwolagos                    *" << endl;
		cout << endl;
		cout << "***************************************************************";
		cout << endl;

		return;
	}
}

void Cinema::about() {
	char on;
	header("archivo");

	cout << "* - Creador: Antony Josue Prendas Vega" << endl;
	cout << "* - Precione q para salir o esc para volver: ";
	cin >> on;
	if (on == 'q') {
		system("exit");
	}
	return;
}

void Cinema::add(string changeAttribute) {
	/// Tipo: pelicula
	/// Tipo: salas
	/// Tipo: horarios

	if (changeAttribute == "pelicula") {
		for (int i = 0; i < MOVIES; i++) {
			if (cinemaMovies[i].getName() != "") {
				string name, synapse, languaje;
				int duration, reviews;

				cout << "Ingrese el nombre de la pelicual: " << endl;
				cin >> name;
				cinemaMovies[i].setName(name);
				cout << "Ingrese la duracion de la pelicula: " << endl;
				duration = input();
				cinemaMovies[i].setDuration(duration);
				cout << "Ingrese la synapsis de la pelicula: " << endl;
				cin >> synapse;
				cinemaMovies[i].setSynapse(synapse);
				cout << "Ingrese la calificacion de la pelicula del 0 al 5: " << endl;
				reviews = input();
				cinemaMovies[i].setReviews(reviews);
				cout << "Ingrese en que lenguaje esta la pelicula: " << endl;
				cin >> languaje;
				cinemaMovies[i].setLanguage(languaje);
				return;
			}
		}
	}
	if (changeAttribute == "horarios") {
		for (int i = 0; i < SCHEDULES; i++) {
			if (cinemaSchedules[i].getDate() == "00/00/00") {///bueno aqui nos puede dar errores para tenerlos en cuenta
				string date;
				string startHour;
				string endHour;

				cout << "Ingrese la fecha en el que se tramitira la pelicual: (Use un formato 00/00/00) " << endl;


				return;
			}
		}
	}
	if (changeAttribute == "salas") {
		for (int i = 0; i < ROOMS; i++) {
			if (cinemaRooms[i].getId() == -1) {///bueno aqui nos puede dar errores para tenerlos en cuenta
				int id;
				double price;
				cout << "Ingrese la id correspodiente para la sala: " << endl;
				id = input();
				cinemaRooms[i].setId(id);
				cout << "Ingrese el costo de la entrada: " << endl;
				price = input();
				cinemaRooms[i].setPrice(price);
				return;
			}
		}
	}
}

void Cinema::edit(string changeAttribute, string movieName) {
	/// Tipo: pelicula
	/// Tipo: salas
	/// Tipo: horarios

}

void Cinema::menus(string menuType) {}


int Cinema::searchInVectorByName(string vector, string name) {
	/// Busqueda por: pelicula
	/// Busqueda por: horarios

	if (vector == "pelicula") {
		for (int i = 0; i < MOVIES; i++) {
			if (name == cinemaMovies[i].getName()) {
				return i;
			}
		}
		return -1;
	}
	if (vector == "horarios") {
		for (int i = 0; i < SCHEDULES; i++) {
			if (name == cinemaSchedules[i].getMovie().getName()) {
				return i;
			}
		}

	}


	return -1;
}

int Cinema::searchInVectorById(string vector, int id) {
	/// Busqueda por: salas
	/// Busqueda por: reservas
	/// Busqueda por: ventas
	/// 
	if (vector == "salas") {
		for (int i = 0; i < ROOMS; i++) {
			if (id == cinemaRooms[i].getId()) {
				return i;
			}
		}

	}
	if (vector == "reservas") {
		for (int i = 0; i < BOOKINGS; i++) {
			if (id == cinemaBookings[i].getBookingId()) {
				return i;
			}
		}

	}
	if (vector == "ventas") {
		for (int i = 0; i < BOOKINGS; i++) {
			if (id == cinemaSales[i].getCartNumber()) {
				return i;
			}
		}

	}
	return -1;
}

int Cinema::input() {
	double value = 0;
	cout << "Ingrese unicamente numero." << endl;
	bool isValid = true;

	while (isValid) {
		cin >> value;
		if (cin.fail()) {                                        // Verifica si la entrada falló
			cin.clear();                                         // Limpia el estado de error de cin 
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora el resto de la línea
			cout << "Opcion no valida. Por favor, intente de nuevo.\n";
		}
		else {
			isValid = false;

		}
	}
	return value;
}

void Cinema::printCinemaMovies() {
	printf("+-----------------------+---------+-------------------------+---------+-----------+\n");
	printf("| %-21s | %7s | %-23s | %7s | %-9s |\n", "Nombre", "Duración", "Sinopsis", "Reseñas", "Idioma");
	printf("+-----------------------+---------+-------------------------+---------+-----------+\n");
	for (int i = 0; i < MOVIES; i++) {

		printf("| %-21s | %7d | %-23s | %7d | %-9s |\n", cinemaMovies[i].getName(), cinemaMovies[i].getDuration(),
			cinemaMovies[i].getSynapse(), cinemaMovies[i].getReviews(), cinemaMovies[i].getLanguage());
		printf("+-----------------------+---------+-------------------------+---------+-----------+\n");

	}
}

void Cinema::printCinemaRooms() {

	for (int i = 0; i < ROOMS; i++) {
		printf("+--------+--------------+----------+\n");
		printf("|   ID   | Asientos     | Precio   |\n");
		printf("+--------+--------------+----------+\n");
		printf("| %6d | %12d | %8.2f |\n", cinemaRooms[i].getId(), cinemaRooms[i].getSeatsNumber(), cinemaRooms[i].getPrice());
		printf("+--------+--------------+----------+\n");

		printf("+--------+----------+\n");
		printf("|   ID   | Estado   |\n");
		printf("+--------+----------+\n");
		for (int j = 0; j < MATRIX_SEAT; j++) {
			printf("| %6d | %-8s |\n", cinemaRooms[i].getRoomSeats((j / MATRIX_SEAT), (j % MATRIX_SEAT)).getId(),
				cinemaRooms[i].getRoomSeats((j / MATRIX_SEAT), (j % MATRIX_SEAT)).getState());
			printf("+--------+----------+\n");
		}
	}


}

void Cinema::printCinemaSchedules() {
	printf("+------------+-------------------+-------+----------+----------+\n");
	printf("|   Fecha    | Nombre de la peli | Sala  | Inicio   | Fin      |\n");
	printf("+------------+-------------------+-------+----------+----------+\n");
	for (int i = 0; i < SCHEDULES; i++) {
		printf("| %-10s | %-17s | %5d | %8s | %8s |\n",
			cinemaSchedules[i].getDate(), cinemaSchedules[i].getMovie().getName(),
			cinemaSchedules[i].getRoom().getId(), cinemaSchedules[i].getStartHour(),
			cinemaSchedules[i].getEndHour());
		printf("+------------+-------------------+-------+----------+----------+\n");
	}
}

void  Cinema::printCinemaBookings() {
	
	for (int i = 0; i < BOOKINGS; i++) {
		printf("+------------+-------------------+-------+----------+----------+----------+----------+\n");
		printf("| Booking ID | Fecha            | Película | Sala  | Inicio   | Fin      | Precio   |\n");
		printf("+------------+-------------------+-------+----------+----------+----------+----------+\n");
		printf("| %10d | %-17s | %-17s | %5d | %8s | %8s | %8.2f |\n",
			cinemaBookings[i].getBookingId(),
			cinemaBookings[i].getSchedule().getDate(),
			cinemaBookings[i].getSchedule().getMovie(),
			cinemaBookings[i].getSchedule().getRoom().getId(),
			cinemaBookings[i].getSchedule().getStartHour(),
			cinemaBookings[i].getSchedule().getEndHour(),
			cinemaBookings[i].getTotalPrice());
		for (int j = 0; i < LIMIT_SEATS; j++) {
			printf("+--------+----------+\n");
			printf("| Asiento | Estado   |\n");
			printf("+--------+----------+\n");
			printf("| %6d | %-8s |\n",
				cinemaBookings[i].getBookSeats(j).getId(),
				cinemaBookings[i].getBookSeats(j).getState());
			printf("+--------+----------+\n");
		}
	}

}

#pragma endregion

