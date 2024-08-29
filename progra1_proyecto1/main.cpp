#include <iostream>
using namespace std;

#pragma region Functions_Declaration
/**
 * @brief Imprime títulos decorados en la consola.
 *
 * Esta función imprime títulos decorados en la consola utilizando asteriscos
 * (`*`) como bordes. El título impreso depende del tipo especificado en el
 * parámetro `title`. Se limpia la pantalla al inicio de la función utilizando
 * `system("cls")` en sistemas Windows para mantener la salida del programa ordenada.
 *
 * @param title Una cadena de texto que especifica el tipo de título que se desea
 *              imprimir. Debe ser uno de los siguientes valores:
 *              - `"principal"`: Imprime el título "Bienvenidos al Cine Fwolagos".
 *              - `"archivo"`: Imprime el título "Acerca del Cine de Fwolagos".
 *              - `"mantenimiento"`: Imprime el título "Mantenimiento Cine Fwolagos".
 *              - `"reserva"`: Imprime el título "Reservaciones Cine Fwolagos".
 *              - `"venta"`: Imprime el título "Ventas Cine Fwolagos".
 *
 * @note La función utiliza `system("cls")` para limpiar la pantalla. Esto es específico
 *       de sistemas Windows. En otros sistemas operativos, considera utilizar
 *       `system("clear")` en su lugar.
 *
 * @warning La función no maneja errores si el tipo de título proporcionado no
 *          coincide con ninguno de los valores esperados.
 */
void header(string);
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






#pragma endregion