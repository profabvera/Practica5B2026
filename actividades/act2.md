Actividad 2

Escriba los programas que figuran como ejemplos _elTipoChar.cpp_ y _elTipoInt.cpp_ del documento tiposEnCPP de la sección doc, compile y compruebe su ejecuión. Es importante que tipee los mismos, así va fijando las instrucciónes. Guárdelo con los mismo nombres en la carpeta CPP de su Netbook.
____

```c++
// elTipoChar.cpp  (Este es el nombre con el cual deben guardar el archivo
// fuente. No es parte del programa, figura como comentario.
#include <iostream>
using namespace std;

int main() {
  char a;
  char b='S';
  a='B';
  cout << "a vale: "<< a << endl;
  cout << "b vale: "<< b << endl;
  cout << "El tamanio de a" << sizeof(a) << "byte" << endl;
  cout << "El tamanio de b" << sizeof(b) << "byte" << endl;
  cout << "El tamanio de un char es:"<< sizeof(char)<< "byte" <<endl; 
  return 0;
}
```
____

``` cpp
//elTipoInt.cpp
#include <iostream>
using namespace std;

int main(){
	int a;
	signed int b;
	unsigned int c=754;

	short int m;
	short signed n;
	short unsigned p;
	
	long int x;
	long signed y;
	long unsigned z;
	
	cout << "Cantidad de memoria de cada Tipos de Dato " << endl;
	cout << "Un tipo int ocupa "<< sizeof(a) <<" byte" << endl;
	cout << "Un tipo short int ocupa " << sizeof(m) << " byte" << endl;
	cout << "Un tipo long int " << sizeof(x) << " byte " << endl;	
	
	return 0;
}
```
____

Por comodidad lo puse aquí abajo.