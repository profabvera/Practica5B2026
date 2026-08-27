# Practica 5a

Actividad 1 - Lista de divisores

Escribe un programa que encuentre todos los divisores de un número entero positivo ingresado por el usuario y los muestre en forma de lista.

El número ingresado debe estar comprendido entre **1 y 1000, inclusive**. El programa no deberá aceptar valores fuera de ese rango.

Si el usuario ingresa un valor fuera del rango permitido, el programa podrá mostrar un mensaje indicando el error y volver a solicitar el ingreso de un número.

Por ejemplo, para el número `12`, el programa debería mostrar:

```
Divisores de 12:1 2 3 4 6 12
```

---

### Solución - No hay una sola

```cpp
#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;


int main() {
	setlocale(LC_ALL, "Spanish");
	bool salir=false;
	char res='n';
    int n=1;
	do{
		system("clear");		
		cout << "\n\t=========================================="<<endl;
		cout << "\t Muestra los divisores un número entero " << endl;
		cout << "\t mayor que 1 y menor o igual que 1000 " << endl;		
		cout << "\t=========================================="<<endl;
			
		cout << "\n\n\tIngrese el número: ";
		cin >> n;
		if(n>1 && n<=1000){			
			cout << "\n\n\tDivisores de " << n << ": ";
			for(int i=1; i<=n; i++){
				if(n%i==0){
					cout << i << " ";
				}
			}
		} else {
			cout << "\tNúmero fuera de rango" << endl;
		}
		
		cout << "\n\n\tDesea Salir s/n?";
		cin >> res;
		if(res=='s'){
			salir=true;
		}
		n=1;			
	}while (n >= 1 && n <= 100 && salir==false);
	return 0;
}
```


