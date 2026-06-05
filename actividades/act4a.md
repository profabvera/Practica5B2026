## Actividad 4a

---

Escribe un programa que nos indique si un número ingresado por el usuario es múltiplo de 6. Si el número ingresado por el usuario es múltiplo de 6 el programa muestra un mensaje como el siguiente. **El número x es múltiplo de 6** donde x es el número que ingresó el usuario. Si no lo es, el programa no hace nada y termina su ejecución.

---



```cpp
#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Spanish");
    int a=0;
    cout << "\n't Ingrese un número múltiplo de 6: ";
    cin >> a;
    if(a%6==0){
        cout << "El número " << a << " es múltiplo de 6" << endl;
    }
    return 0;
}
```



Observaciones:

- En el código fuente de nuestros programas no podíamos utilizar textos con acentos porque estos son propios del español y, por defecto el lenguaje C++ no los reconoce. Por eso hemos incluido la librería **locale** y en el cuerpo del programa la sentencia **setlocale(LC_AL, "Spanish")**. Es bueno incorporar ese habito para nuestro querido español. 

- El operador **%** es el operador de módulo. Retorna el resto de una división entera. Por ejemplo, al dividir 14 dividio entre 3 el cociente es 4 y el resto 2, entonces si hacemos 14%3 el resultado es 2 porque estamos realizando la operación de módulo, no la división. En cambio si hacemos 14/3 el resultado es 4 porque el cociente es 4. Entonces hay que distinguier claramente entre 
  
  - Operador de división "/"
  
  - OPerador de módulo "%"

- En este caso a%6==0 es una expresión relacional, compara a%6 con 0, si es múltiplo de 6 el módulo es cero y la comparación resulta verdadero. Se ejecuta el bloque dentro del if. Si en cambio es distinto de cero no se ingresa en ese bloque, se pasa a la siguente línea.

- Nuestro programa solo nos indica si el número ingresado por el usuario es múltiplo de 6, pero si no lo es no nos dice nada. Podríamos agregar un mensaje en el caso que no lo fuera. Eso se logra con el complemento del **if** que es el **else**

-  



 


