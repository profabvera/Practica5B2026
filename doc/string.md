### La clase string

Para poder almacenar palabras o cadena de textos es necesario utilizar un array de caracteres, como no vamos a utilizarlo todavía, hay contenidos que debemos conocer y saber utilizar antes decidimos introducir la biblioteca (o librería) string.

El siguiene programa solicita al usuario que ingrese su nombre a través del teclado y muestra un saludo.

```cpp
#include <iostream>
#include <string> 
using namespace std;

int main() {
    string user;
    cout << "********************************" << endl;
    cout << "Este programa muestra un saludo " << endl;
    cout << "********************************" << endl;

    cout << "Ingrese su nombre: ";
    cin >> user;
    cout << "\n\t Hola " << user << endl;
    cout << "\n\t ¡Que tengas un maravilloso día hoy! :-) ";
    return 0;
}
```
