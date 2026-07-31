# Actividad 5a Solución

Escribe un programa que sume todos los números del 1 al 100. Al archivo fuente lo llamaremos **act5a.cpp** y al ejecutable **act5a**. La salida del programa debe ser tan simple como esta

```bash
armando@:src$ ./act5a 

    Suma de 1 a 100: n


armando@:src$ 
```

donde **n** representa el resultado de la suma.

Este problema se conoce como **la suma de Gauss**. Se cuenta que Carl Friedrich Gauss, cuando tenía apenas nueve años, resolvió este problema en pocos minutos. Existen diversas formas de obtener el resultado, pero en este caso utilizaremos este ejemplo para mostrar la necesidad de contar con instrucciones que permitan realizar tareas repetitivas.

Todo programa puede construirse combinando cuatro estructuras fundamentales:

- Secuencial

- Selección

- Repetición

- Invocación de funciones.

Claramene este problema debemos hacer una tarea repetitiva. Si llamamos *suma* al múmero que estamos sumando y empezamos en con *suma=0* claramente la cuenta sería como esta:

```cpp
suma=suma+1+2+3+4+5+...+100;
```

Si el lenguaje dispone de una instrucción que permita repetir automáticamente un conjunto de acciones, el programa resulta mucho más simple y fácil de mantener.

Con un contador (variable contador) a la que llamaremos *i* podemos hacerlo así:

```cpp
i=1;
suma=0;
-------------------------------------------------------------------------
suma=suma+i; // suma contiene el valor 1
i=i+1; // la variable contador i contiene el valor 2
-------------------------------------------------------------------------
```

En el paso siguiente

```cpp
i=2;
suma=1;
-------------------------------------------------------------------------
suma=suma+i; // suma contiene el valor 3
i=i+1; // la variable contador i contiene el valor 3
-------------------------------------------------------------------------
```

Siguiente

```cpp
// Valor que contiene la variable antes de ingresar al ciclo
// i=3;
// suma=3;
-------------------------------------------------------------------------
suma=suma+i; // suma contiene el valor 6
i=i+1; // la variable contador i contiene el valor 4
-------------------------------------------------------------------------
```

Siguiente 

```cpp
i=4;
suma=6;
-------------------------------------------------------------------------
suma=suma+i; // suma contiene el valor 10
i=i+1; // la variable contador i contiene el valor 5
-------------------------------------------------------------------------
```

```cpp
i=5;
suma=10
-------------------------------------------------------------------------
suma=suma+i; // suma contiene el valor 15
i=i+1; // la variable contador i contiene el valor 6
```

Para estas tareas repetitivas C++ cuenta con las siguientes sentencias:

- **while**

- **do while**

- **for**

### While(condicion)

El más simple y utilizado con frecuencia es **while** que traducido significa mientras la condición sea verdadera..

Para una mejor explicación lo vamos a reducir no a sumar los 100 primeros números, sino los primeros 10 números enteros.

```cpp
/// act5a1.cpp
#include <iostream>
using namespace std;

int main() {
    int suma=0;
    int i=1; // Esta variable se llama variable contador y viene a ser
             // una variable de control.
    while(i<=10){
        suma=suma+i; // Acumulador
        i=i+1;
    }
    cout << "\n\tSuma de 1 a 10: " << suma << endl;
    return 0;
}
```

La sentencia 

```cpp
while(i<=10){
    // Mientras se cumple la condición
    // Se ejecuta este bloque de c
}
```

evalúa la expresión `i<=10`. Si el resultado es `true`, se ejecuta el bloque encerrado entre llaves. Si el resultado es `false`, el bloque se omite y la ejecución continúa con la siguiente instrucción del programa*.  Si es true (verdadero) ingresa en el bucle y se ejecuta las instrucciones dentro de las llaves.  En cambio si resulta flase (falso) se pasa a la siguiente instrucción después de la llave sin ejecutar las intrucciones entre las llaves.  Analicemos paso a paso y los distintos valores que se le van asignando a las dos variables de nuestro programa, *i y suma*.

El paso 0 es antes de entrar en el bucle o ciclo while. 

```html
|  Paso | 0  | 1 | 2 | 3 |  4 |  5 |  6 |  7 |  8 |  9 | 10 |
|-------|----|---|---|---|----|----|----|----|----|----|----|
|  suma | 0  | 1 | 3 | 6 | 10 | 15 | 21 | 28 | 36 | 45 | 55 |
|-------|----|---|---|---|----|----|----|----|----|----|----|
|    i  | 1  | 2 | 3 | 4 |  5 |  6 |  7 |  8 |  9 | 10 | 11 |
```

La intrucción 

```cpp
while(i<=10)
```

En el primer paso *i=1* entonces la expresión *i<=10* produce un true, por lo tanto se ingresa en el bloque dentro de las llaves.

```cpp
suma=suma+i;
```

La instrucción toma el valor actual de `suma`, le agrega el contenido de `i` y almacena nuevamente el resultado en la variable `suma`. Es decir, el valor anterior se reemplaza por el nuevo resultado de sumar el contenido de suma (que es cero) con el contenido de i (que es 1) y asignárselo a suma nuevamente. Ten en cuenta que esa instrucción sobreescribe el valor que había previamente en *suma*.

suma ahora tiene el valor 1, es decir *suma=1*. Inmediatamente después

```cpp
i=i+1;
```

Se incrementa el valor de la variable contador en una unidad. A i (que vale 1) se le suma 1 por lo que ahora *i=2*. 

Cada vez que se ejecuta el cuerpo del bucle se completa una **iteración** (Asi se le llama al proceso repetitivo) las variables terminan con los valores que figuran en el paso 1 de la tabla anterior.

Después se vuelva a realizar la prueba lógica *2<=10*, dado que es verdadero se realiza las mismas operaciones que, al culminar, teminan con las variables con los valores que figura en el paso 2. Eso se repite mientras la prueba lógica *i<=10* produzca un valor true. Observa que en el último paso (el paso 10) la variable contador contiene al valor 11 y al realizar la prueba *11<=10* resulta false por lo que no se ingresa más dentro del bucle while y se pasa a la siguente línea la cual imprime en pantalla el contenido de la variable *suma*. 

## do while(condicion)

Esta intrucción se interpreta como "hacer mientras", es decir "haga esto mientras se condición sea true"

Veamos el mismo ejemplo anterior

```cpp
/// act5a2.cpp
#include <iostream>
using namespace std;

int main() {
    int suma=0;
    int i=1; // Esta variable se llama variable contador y viene a ser
             // una variable de control.
    do {
       suma=suma+i; // Acumulador
       i=i+1;
    } while(i<=10);
    cout << "\n\tSuma de 1 a 10: " << suma << endl;
    return 0;
}
```

Compila y ejecuta este programa. Verás que su comportamiento es practicamente igual al anterior, pero ojo. Modifica el valor inicial de *i*, pon i=12, compila y ejecuta. Notarás que suma contiene el valor 12 y no 0 como debería ser. Trata de explicar por qué.

La otra instrucción repetitiva es for

### for

El programa anterior utilizando la sentencia for es el siguiente:

```cpp
/// act5a3.cpp
#include <iostream>
using namespace std;

int main() {
    suma=0;
    for(int i=1; i<=10; i++){
       suma=suma+i; // Acumulador
    }
    cout << "\n\tSuma de 1 a 10: " << suma << endl;
    return 0;
}
```

Observa que esta sentencia contiene todo lo que necesita el bloque al comienzo dentro del paréntesis.

la sentencia for tiene esta forma

```cpp
for(inicializacion;condicion;incremento) {
    // bloque de ejecución si condición es true
}
```

En *inicialización* se inicializan las variables de control, condición es una expresión que retorna un valor true o false y determina el ingreso o no dentro del bloque y, por último en *incremento* se modifican las variables de control.

Observa que hemos puesto

```cpp
i++; // esto es lo mimso que i=i+1
```
