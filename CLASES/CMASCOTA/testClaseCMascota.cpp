///********* Macota Felíz **********
/* Clase testClaseCMascota V-0.1 
 * Programación Orientada a Objetos
 * con C++ - Prof. Armando B. VERA */
/// ================================
#include "CMascota.h"
#include <iostream>
using namespace std;


int main() {
	cout << "\t##################################" << endl;
	cout << "\t Prueba de la clase CMascota" << endl;
	cout << "\t##################################" << endl;
	
	cout << "\n\nCreamos una objeto utilizando el constructor "<< endl;
	cout << "con valores por defecto" << endl;
	CMascota m1;
	cout << "\n\tMostramos el objeto creado con ese constructor " <<endl;
	cout << "\tutilizando el metodo de representaión \n " << endl;
	cout << m1.toString() << endl;
	
	cout << "\n\n\tAhora creamos una mascota utilizando el constructor general " << endl;
	
	CMascota m2(1,"Toby","Perro","Labrador", "17 de Julio de 2023", 38.7);
	cout<< "\n\tObjeto creado con el constructor parametrizado o constructor general" << endl;
	cout << "\n" << m2.toString() << endl;
	
	
	std::string corcho = "\U0001F415";
	
	
	cout << "\n\n\t Siéntase libre de probar los otros métodos " << corcho <<"\n" << endl;	
	
	return 0;
	
} 

