# include <iostream>
#include "CRectangulo.h"
using namespace std;

int main() {
/// Declaración de variables a usar en el programa
	double b; // base
	double h; // altura
	
///=== Uso del Constructor CRectangulo()
	/* Declaramos un objeto CRectangulo utilizando
	 * el constructor con valores por defecto */
	CRectangulo r;
	
///=== Utilizamos los métodos de forma individual

	cout << "\n\tDatos del rectángulo " << endl;
	cout << "\tBase: " << r.getBase() << endl;
	cout << "\tAltura: " << r.getAltura() << endl;
	cout << "\tPerímetro: " << r.perimetro() << endl;
	cout << "\tÁrea: " << r.area() << endl;
	cout << "\tDiagonal: " << r.diagonal() << endl;
	
///=== Ahora utilizamos el métod toString()

	cout << "\n\n\tLos mismos datos con el métod toString() " << endl;
	cout << r.toString();
	
///=== Ahora probamos los métodos de seteos (Asignación)

	cout << "\n\tActualizamos el mismo objeto con nuevos datos " << endl;
	cout << "\ty usamos el método toString() solamente " << endl;
	r.setBase(6.5);
	r.setAltura(4.3);
	cout << r.toString() << endl;
	
///=== Uso del constructor General de manera interactiva

	cout << "\n\n\tIngrese la medida de la base y la" 
		<< "de un rectángulo"<< endl;
	cout << "\n\t\tBase: ";
	cin >> b;
	cout << "\n\t\tAltura: ";
	cin >> h;
	CRectangulo r1(b,h); // r1 usa el constructor general
	
	cout << r1.toString() << endl;
	
	return 0;
}	
	 
