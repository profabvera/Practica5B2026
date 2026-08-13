Escribe un programa que solicite al usuario un número entero mayor o igual que **100** y menor o igual que **1000**, éstos inclusive.

Si el número ingresado no cumple estas condiciones, el programa deberá mostrar el mensaje:

> **Número ingresado no válido**

y volver a solicitar que se ingrese un número válido.

Si el número ingresado es válido, el programa deberá contar la cantidad de divisores que posee.

Para resolver el problema, utiliza una variable entera, por ejemplo **`n`**, para almacenar el número ingresado y una función `cantDiv()` definido al final del bloque main().  Cabe aclarar que el prototipo debe declararse antes de bloque main(). 

Finalmente, el programa deberá mostrar un mensaje con el siguiente formato:

> **El número `n` tiene `cantDiv(n)` divisores.**

Podrá almacenar la cantidad de divisores en una variable entera **`numDiv=cantDiv(n)`** o utilizar directamente la función **`cantDiv(n)`** en el lugar donde se necesite.

**Observación:** Antes de comenzar el algoritmo de búsqueda y conteo de divisores, es necesario validar que el número ingresado por el usuario cumpla con las condiciones establecidas. Es importante hacer notar que el programa no continúa ni se cierra si el número ingresado no se valida.

La estura básica del programa es:

```cpp
#include <iostream>
#include <locale>

int cantDiv(int n); /// Declaración de función. Prototipo

int main(){
    setlocale(LC_ALL,"Spanish");            
    ...
    return 0;
}

/// Definición de la función
int cuentaDiv(int n){
    int numDiv=2; 

    ...
    return cantDiv;
}
```

Hemos agregado a la consigna original la posibilidad de realizar el conteo de divisores las veces que el usuario lo desea aprovechando las bondades de las instrucciones repetitivas o ciclos y las variables booleanas.

# Solución

```cpp
#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL,"Spanish");
    bool salir=false;
    char opc='n';
    while(salir==false){
        system("clear");
        int n=0; // Número que ingresó el usuario
    //    int cantDiv=2; // Cantidad de divisores
        int cantDiv(int n_in);
        bool val=false;
        while(val==false){
            system("clear");
            cout << "\n\t======================================="<< endl;
            cout << "\tIngrese un número entero mayor o igual " << endl;
            cout << "\tque 100 y menor o igual que 1000" << endl;
            cout << "\t======================================="<< endl;    
            cout << "\n\t\t Ingrese el número: ";
            cin >> n;
            if(n >= 100 && n <= 1000){
                val=true;
            }
    //        cantDiv=cuentaDiv(n);
        }
        cout << "\n\tEl número "<< n << " tiene " << cantDiv(n) << " divisores" << endl;
        cout << "\n\n\tSalir del programa s/n?:";
        cin >> opc;
        if(opc=='s'){
            salir=true;
        }
    }
    return 0;
}

int cantDiv(int n){
    int numDiv=0;
    for(int i=1;i <= n; i++){
        if(n%i==0){
            numDiv++;
        }
    }
    return numDiv;
}
```

# Práctica

Modifique el programa anterior para que ahora nos diga si un número ingresado por el usuario es primo. Haga que el rango sea entre 1 y 1 000 000. La respuesta del programa debería parecerse a esta:

```bash
El número 101 es primo
```

o bien

```bash
El número 144 no es primo
```

Estos son solo ejemplos. Lo que se pide que el programa responda por cualquier número entre uno y un millón, pero recuerde algo importante. Si el usuario ingresa el 1 la respuesta debiera ser: `el 1 no es primo ni compuesto`. Llame al programa fuente  `act5da.cpp` y al ejecutable `act5da`.

# Aclaraciones

En varias secciones hemos mencionado las estructuras principales de un progrma C++. Dijimos que cualquier programa puede realizarse utilizando estas cuatro estructuras lógicas:

- Secuencial

- Selección

- Repetición

- Invocación

La invocación se refiere a la posibilidad de llamar a bloques de códigos definidos fuera del programa principal. La idea o premisa cuando se utiliza esta estructura es la de `divide y vencerás`. En el caso del ejemplo, en lugar de hacer un programa main() mostruoso o muy grande se divide en tareas más pequeñas cada uno de forma independiente y luego se los llama en los lugares donde se necesita. Para el caso del programa de práctica podrías definir una función `bool esPrimo(int n)` que retorne `true` si `n` es primo y `false` si `n` no es primo y en función a ese valor elaborar una respuesta en el programa principal. Son ideas, recuerda que un mismo programa puede tenen muchas soluciones, algunas más eficientes que otra.
