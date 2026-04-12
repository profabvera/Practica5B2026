## Actividad 2b

#### Aplicación del Concepto de Variable

Escriba un programa en la cual se declaren tres variables de tipo **char** luego se le asigne las iniciales de sus nombres y apellido y los muestre en pantalla (todo en una sola línea y separado por un espacio de caracter así: '' A. B. V. ''), luego cambie el contendio de dichas variables por otros valores y los vuelva a mostrar (podría ser la iniciales de su abuelo o abuela, o de su ídolo :-) ). El programa debe construirse sin errores y ejecutarse. El nombre del archivo fuente de este programa es **act2b.cpp** y **act2b** el nombre del binario ejecutable.

- Objetivos
  
  - Reconocer los tipos de datos y caracterizarlos
  
  - Reconocer el concepto de variable en un programa.
  
  - Asignar valores a una variable.
  
  - Utilizar el operador *ziseof* para determinar el tamaño de un tipo de dato.
  
  - Observar como se utilizar una variable cambiando el contenido durante la ejecución de un programa.
    
    **compilamos desde el terminal**
    
    ```c++
    g++ -Wall -o act2b act2b.cpp
    ```
  
  - El parametro -Wall se utiliza para que el compilador muestre todos los errores y avisos que surjan y no descarte ninguno.
  
  ### Un poco de ayuda

Hay diversas forma de realizar la actividad, pero con lo visto hasta ahora es posible hacerlo. Como ayuda voy a poner un ejemplo de una actividad que hace uso de una variable tipo *int* los muestra, cambia el valor y los vuelve a mostrar.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a=5; //Declaración y definición de la variable entera a;
    cout << "Valor de a: " << a << endl;
    a=9; // Se sobreescribe el valor 5, cambia por 9
    cout << "Valor de a: " << a << endl;
    return 0;
}
```

En este ejemplo puedes obeservar como un mismo *identificador*, **a** primero contiene el valor 5, luego se sobreescribe ese valor (se va, desaparece), cambia por el 9.

Podemos pensar en una variable como una caja en el cual podemos cambiar su contenido durante la ejecución de un programa. Solo que hay cajas que son exclusivas para determinados contenidos. Una caja que solo puede almacenar turrones, otra solo alfajores, no podemos almacenar turrones en una de alfajores porque los turrones se deterioran o no caben. Por eso una caja que pueden contener un numero entero es int y uno para contener un caracter es char. Hay otras cuestiones aquí de bajo nivel pero que no conviene tratarlos.

Volviendo a la actividad, debes hacer algo parecido con las tres variables tipo char. Le asignas las inciales de tus nombres y apellido, los muestra (como se pide en la actividad), cambia sus valores por otros y los vuelve a mostrar.