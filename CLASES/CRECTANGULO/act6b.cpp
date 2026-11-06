#include <iostream>
#include <cstdlib>
#include <locale>
#include "CRectangulo.h"
using namespace std;

int main() {
	setlocale(LC_ALL,"Spanish");
	bool salir=false;
	char opc='n';
	double b=0; // base
	double h=0; // altura
	
	do {
		system("clear");
		cout << "\n\t===============================" << endl;
		cout << "\t Actividad 6b " << endl;
		cout << "\t===============================" << endl;

		cout << "\n\t\tIngrese la base: ";
		cin >> b;
		cout << "\n\t\tIngrese la altura: ";
		cin >> h;

		CRectangulo r(b,h);
		
		cout << r.toString() << endl;
		
		cout << "\n\n\tDesea salir s/n:?";
		cin >> opc;
		if(opc=='s'){
			salir=true;
		}
	} while(salir!=true);
	return 0;
}
