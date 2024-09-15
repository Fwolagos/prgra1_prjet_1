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

void Cinema::menus(string menuType) {}

int Cinema::input() {
	double value = 0;
	cout << "Ingrese unicamente numero." << endl;
	bool isValid = true;

	while (isValid) {
		cin >> value;
		if (cin.fail()) {                                        // Verifica si la entrada fall�
			cin.clear();                                         // Limpia el estado de error de cin 
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora el resto de la l�nea
			cout << "Opcion no valida. Por favor, intente de nuevo.\n";
		}
		else {
			isValid = false;

		}
	}
	return value;
}

Seat Cinema::reserveSeat(int idSchedule, int idSeat) {
	if (cinemaSchedules[idSchedule].getRoom().
		getRoomSeats(idSeat / MATRIX_SEAT, idSeat % MATRIX_SEAT).
		getState() != "Available") {
		cout << "El asiento esta ocupado elija otro: " << endl;
		idSeat = input();
		reserveSeat(idSchedule, idSeat);
	}

	cinemaSchedules[idSchedule].
		getRoom().
		getRoomSeats(idSeat / MATRIX_SEAT, idSeat % MATRIX_SEAT).
		setState("Reserved");

	return cinemaSchedules[idSchedule].
		getRoom().getRoomSeats(idSeat / MATRIX_SEAT, idSeat % MATRIX_SEAT);
}

#pragma region Edit vectors
void Cinema::edit(string changeAttribute, string movieName) {
	/// Tipo: pelicula
	/// Tipo: salas
	/// Tipo: horarios

}
#pragma endregion

#pragma region Add in vectors

void Cinema::addMovie(){
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

void Cinema::addSchedule() {
	for (int i = 0; i < SCHEDULES; i++) {
		if (cinemaSchedules[i].getDate() == "00/00/00") {///bueno aqui nos puede dar errores para tenerlos en cuenta
			string date;
			string startHour;
			string endHour;
			string movieName;
			int idRoom;
			printCinemaMovies();
			cout << "Escriba el nombre de la pelicula que se desea trasmitir" << endl;
			cin >> movieName;
			cinemaSchedules[i].setMovie(cinemaMovies[searchByName("pelicula", movieName)]);

			cout << "Ingrese la fecha en el que se trasmitira la pelicula: (Use un formato 00/00/00) " << endl;
			cin >> date;
			cinemaSchedules[i].setDate(date);

			cout << "A que horas inicia la pelicual: " << endl;
			cin >> startHour;
			cinemaSchedules[i].setStartHour(startHour);

			cout << "A que hora termina la pelicual: " << endl;
			cin >> endHour;
			cinemaSchedules[i].setEndHour(endHour);

			printCinemaRooms();
			cout << "En que sala se va a trasmitir la pelicula: " << endl;
			idRoom = input();
			cinemaSchedules[i].setRoom(cinemaRooms[searchById("salas", idRoom)]);

			header("matenimiento");
			cout << "Su horario fue a�adido con mucho exito" << endl;

			system("pause");

			return;
		}
	}
}

void Cinema::addRoom() {
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

			header("mantenimiento");
			cout << "Su pelicula fue agregada exitosamente" << endl;

			system("pause");

			return;
		}
	}
}

void Cinema::addBooking() {
	for (int i = 0; i < BOOKINGS; i++) {
		if (cinemaBookings[i].getBookingId() == -1) {///bueno aqui nos puede dar errores para tenerlos en cuenta
			int idSchedule;
			int numberOfSeats;
			int totalPrice;
			printCinemaSchedules();

			cout << "Ingrese la id del Horario donde se encuentra la peli que deceas ver: " << endl;
			idSchedule = input();
			idSchedule = searchById("horarios", idSchedule);
			cinemaBookings[i].setSchedule(cinemaSchedules[idSchedule]);

			cout << "Ingrese la cantidad de asientos que decea reservar: " << endl;
			numberOfSeats = input();
			if (numberOfSeats > LIMIT_SEATS) {
				numberOfSeats = LIMIT_SEATS;
			}
			for (int j = 0; j < numberOfSeats; j++) {
				int idSeat;
				cout << "Ingrese el numero de la butaca: " << endl;
				idSeat = input();
				cinemaBookings[i].setBookSeats(reserveSeat(idSchedule, idSeat), j);
				
			}

			totalPrice = cinemaBookings[i].getSchedule().getRoom().getPrice() * numberOfSeats;
			cinemaBookings[i].settotalPrice(totalPrice);

			cinemaBookings[i].setBookingId(i);

			header("reserva");
			cout << "Su reserva fue todo un exito" << endl;

			system("pause");


			return;
		}
	}
}

void Cinema::addSale() {
	for (int i = 0; i < SALES; i++) {
		int idCostumer;
		int cartNumber;
		int idBooking;
		printCinemaBookings();

		cout << "Ingrese la id de su reserva: " << endl;
		idBooking = input();
		idBooking = searchById("reservas", idBooking);
		cinemaSales[i].setBooking(cinemaBookings[idBooking]);

		cout << "Por favor ingrese su Cedula de cliente vip: " << endl;
		idCostumer = input();
		cinemaSales[i].setIdCostumer(idCostumer);

		cout << "Por favor ingrese su numero de targeta y los tres numeros de atras: " << endl;
		idCostumer = input();
		cinemaSales[i].setIdCostumer(idCostumer);

		header("venta");
		cout << "Su compra a sido un exito por favor disfrute de su peli" << endl;

		system("pause");

	}
}

#pragma endregion

#pragma region Search algorithms

int Cinema::searchByName(string type, string name) {
	int position = 0;
	if (type == "pelicula") {
		position = searchInVectorByName("pelicula", name);
		if (position == -1) {
			cout << "Pelicula no encontrada, por favor vuela a intentar:" << endl;
			cin >> name;
			searchByName(type, name);
		}
		return position;
	}
	if (type == "horarios") {
		position = searchInVectorByName("horarios", name);
		if (position == -1) {
			cout << "horario no encontrado, por favor vuela a intentar:" << endl;
			cin >> name;
			searchByName(type, name);
		}
		return position;
	}
}

int	Cinema::searchById(string type, int id) {
	int position = 0;
	if (type == "salas") {
		position = searchInVectorById("salas", id);
		if (position == -1) {
			cout << "Sala no encontrada, por favor vuela a intentar:" << endl;
			id = input();
			searchById(type, id);
		}
		return position;
	}
	if (type == "reservas") {
		position = searchInVectorById("reservas", id);
		if (position == -1) {
			cout << "reserva no encontrada, por favor vuela a intentar:" << endl;
			id = input();
			searchById(type, id);
		}
		return position;
	}
	if (type == "ventas") {
		position = searchInVectorById("ventas", id);
		if (position == -1) {
			cout << "venta no encontrada, por favor vuela a intentar:" << endl;
			id = input();
			searchById(type, id);
		}
		return position;
	}

}

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

#pragma endregion

#pragma region Show information algorithms
void Cinema::printCinemaMovies() {
	printf("+-----------------------+---------+-------------------------+---------+-----------+\n");
	printf("| %-21s | %7s | %-23s | %7s | %-9s |\n", "Nombre", "Duraci�n", "Sinopsis", "Rese�as", "Idioma");
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
		printf("| Booking ID | Fecha            | Pel�cula | Sala  | Inicio   | Fin      | Precio   |\n");
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

#pragma endregion

