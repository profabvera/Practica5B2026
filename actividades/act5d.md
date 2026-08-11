Escribe un programa que solicite al usuario un número entero mayor o igual que **100** y menor o igual que **1000**, éstos inclusive.

Si el número ingresado no cumple estas condiciones, el programa deberá mostrar el mensaje:

> **Número ingresado no válido**

y volver a solicitar que se ingrese un número válido.

Si el número ingresado es válido, el programa deberá contar la cantidad de divisores que posee.

Para resolver el problema, utiliza una variable entera, por ejemplo **`n`**, para almacenar el número ingresado y una función `cuetaDiv()` definido al final del bloque main().  Cabe aclarar que el prototipo debe declararse antes de bloque main(). 

Finalmente, el programa deberá mostrar un mensaje con el siguiente formato:

> **El número `n` tiene `cantDiv` divisores.**

Podrá almacenar la cantidad de divisores en una variable entera **`cantDiv`** o utilizar directamente la función **`cuentaDiv()`**

**Observación:** Antes de comenzar el algoritmo de búsqueda y conteo de divisores, es necesario validar que el número ingresado por el usuario cumpla con las condiciones establecidas. Es importante hacer notar que el programa no continúa ni se cierra si el número ingresado no se valida.

La estura básica del programa es:

```cpp
#include <iostream>
#include <locale>

int cuentaDiv(int n); /// Declaración de función. Prototipo

int main(){
    setlocale(LC_ALL,"Spanish");            
    ...
    return 0;
}

/// Definición de la función
int cuentaDiv(int n){
    int cantDiv=2; 

    ...
    return cantDiv;
}
```
