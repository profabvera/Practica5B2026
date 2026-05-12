### Actividad 3a

---

Escriba un programa que muestre el siguiente mensaje: **"Hola, buen día, ¿Como te llamas? "**. Luego el usuario escribirá su nombre, por ejemplo **Felipe** y el programa mostrará **Hola Felipe, que tengas un hermoso día hoy!** y terminará su ejecución. Llame al programa fuente *act3a.cpp*  y al ejecutable  *act3a*

---

En esta actividad se pretende que el alumno introduzca datos desde el teclado y los muestre por pantalla. Se utiliza los objetos **cin**, con el operador **>>** y el objeto **cout** y su operador **<<** como así también el objeto **endl** (end line o fin de linea) que cierra el flujo abierto con **cout**.

Como deseamos que el usuario pueda ingresar cadenas de texto como el nombre vamos a comenzar tempranamente a utilizar la librería **string**. Con ello vamos a porder declarar variables (objetos) de este tipo que puedan almacenar por ejemplo el nombre. 

El siguiente ejemplo muestra como declarar una variable de tipo string para poder usarlo en la aplicación

---

```cpp
#include <iostream>
#include <string>  // Agregamos esta librería
using namespace std;

int main() {
    std::string nombre; // Declaramos un ojetos que puede almacenar una
    ...                 // cadena de texto.

    nombre="Fulano"; // La variable (objeto) contiene la cadena Fulano
    ...
    nombre="Mengano"; // Ahora la variable contiene la cadena Mengano

    ...
    return 0;
}
```

El comando para compilar desde el terminal es:

```bash
$ g++ -Wall -o act3a act3a.cpp
```

El parámetro **-Wall** le dice al compilador muéstrame todos los avisos y errores que tenga. El parámetro **-o** indica que lo que sigue a ese parámetro será el nombre del archivo ejecutable. Por último, hemos puesto el nombre del archivo fuente.

- Tips
  
  - #### Inicialización de C++ moderno
    
    Si vamos a inicializar una variable de tipo **string** como por ejemplo la variable **nombre** **C++ moderno** sugiere utilizar esta forma:
    
    ```cpp
    std::string nombre{"Firulais"};  // En lugar de
    std::string nombre = "Firulais"; // esta
    ```
