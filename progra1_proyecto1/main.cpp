#include <iostream>
using namespace std;

#pragma region Functions_Declaration
/**
 * @brief Imprime t�tulos decorados en la consola.
 *
 * Esta funci�n imprime t�tulos decorados en la consola utilizando asteriscos
 * (`*`) como bordes. El t�tulo impreso depende del tipo especificado en el
 * par�metro `title`. Se limpia la pantalla al inicio de la funci�n utilizando
 * `system("cls")` en sistemas Windows para mantener la salida del programa ordenada.
 *
 * @param title Una cadena de texto que especifica el tipo de t�tulo que se desea
 *              imprimir. Debe ser uno de los siguientes valores:
 *              - `"principal"`: Imprime el t�tulo "Bienvenidos al Cine Fwolagos".
 *              - `"archivo"`: Imprime el t�tulo "Acerca del Cine de Fwolagos".
 *              - `"mantenimiento"`: Imprime el t�tulo "Mantenimiento Cine Fwolagos".
 *              - `"reserva"`: Imprime el t�tulo "Reservaciones Cine Fwolagos".
 *              - `"venta"`: Imprime el t�tulo "Ventas Cine Fwolagos".
 *
 * @note La funci�n utiliza `system("cls")` para limpiar la pantalla. Esto es espec�fico
 *       de sistemas Windows. En otros sistemas operativos, considera utilizar
 *       `system("clear")` en su lugar.
 *
 * @warning La funci�n no maneja errores si el tipo de t�tulo proporcionado no
 *          coincide con ninguno de los valores esperados.
 */
void header(string);

/**
 * @brief Muestra informaci�n sobre el creador y permite salir o volver.
 *
 * Imprime el nombre del creador y espera una entrada del usuario. Si el usuario presiona
 * 'q', intenta cerrar la terminal usando `system("exit")`. Presionar cualquier otra tecla
 * regresa al men� anterior.
 *
 * @note El uso de `system("exit")` puede no cerrar la terminal en todos los sistemas.
 */
void about();
#pragma endregion


int main() {
	cout << "ejemplo para andy ";
}

#pragma region Functions_Definition 
void header(string title) {
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

void about() {
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






#pragma endregion