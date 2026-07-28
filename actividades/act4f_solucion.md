### Actividad 4f

Escribe un programa que muestre el siguiente menú al usuario. Cuando el usuario selecciona una de las opciones, el programa debe mostrar un mensaje como **Seleccionó Listas** en el caso que el usuario haya ingresado el valor 4.

```bash
    === Menu === 
    ------------
    1.- Altas 
    2.- Bajas 
    3.- Modificaciones 
    4.- Listas 
    5.- Salir 

        Elija una opción: 
```

```bash
    === Menu === 
    -------------
    1.- Altas 
    2.- Bajas 
    3.- Modificaciones 
    4.- Listas 
    5.- Salir 

        Elija una opción: 4

        Seleccionó Listas
```

En este caso se pretende que el alumno utilice la sentencia de selección multiple **switch**.

## Solución

```cpp
#include <iostream>
using namespace std;

int main() {
	int opc=0;
	cout << "\n\t=== Menu === " << endl;
	cout << "\t-------------" << endl;
	cout << "\t1.- Altas " << endl;
	cout << "\t2.- Bajas " << endl;
	cout << "\t3.- Modificaciones " << endl;
	cout << "\t4.- Listas " << endl;
	cout << "\t5.- Salir " << endl;
	cout << "\n\t\tElija una opción: ";
	cin >> opc;
	
	switch(opc){
		case 1:
			cout << "\n\t\tSeleccionó Altas" << endl;
			break;
		case 2:
			cout << "\n\t\tSeleccionó Bajas" << endl;
			break;
		case 3:
			cout << "\n\t\tSeleccionó Moficicaciones" << endl;
			break;
		case 4:
			cout << "\n\t\tSeleccionó Listas" << endl;
			break;
		case 5:
			cout << "\n\t\tSeleccionó Salir" << endl;
			break;
		default:
			cout << "\n\t\tIncorrecto. Este valor no es parte del menú" << endl;
	}
	return 0;
}
```


