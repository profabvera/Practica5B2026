## Actividad 3

#### Aplicación del Concepto de Variable

Escriba un programa en la cual se declare tres variables de tipo **char** luego se le asigne las iniciales de sus nombres y apellido y los muestre en pantalla (todo en una sola línea y separado por un espacio de caracter así: ``A. B. V.''), luego cambie el contendio de dichas variables por otros valores y los vuelva a mostrar. El programa debe construirse sin errores y ejecutarse. El nombre del archivo fuente de este programa es **act3.cpp** y **act3** el nombre del binario ejecutable.

- Objetivos
  
  - Reconocer los tipos de datos y caracterizarlos
  
  - Reconocer el concepto de variable en un programa.
  
  - Asignar valores a una variable.
  
  - Utilizar el operador *ziseof* para determinar el tamaño de un tipo de dato.
  
  - Observar como se utilizar una variable cambiando el contenido durante la ejecución de un programa.

### Un poco de ayuda

Hay diversas forma de realizar la actividad, pero con lo visto hasta ahora es posible hacerlo. Como ayuda voy a poner un ejemplo de una actividad que hace uso de una variable tipo _int_ los muestra, cambia el valor y los vuelve a mostrar.

```bash
1  #include <iostream>
2  using namespace std;
3
4  int main(){
5    int a=5; // Declaración y definición de la variable entera a;
6    cout << "Valor de a: " << a < endl;
7    a=9; // Se sobreescribe el valor
8    cout << "Nuevo valor de a: " << a << endl;
9    return 0;
10 }
```

En este ejemplo puedes obeservar como un mismo _identificador_, **a** primero contiene el valor 5, luego se sobreescribe ese valor (se va, desaparece), cambia por el 9. 

Podemos pensar en una variable como una caja en el cual podemos cambiar su contenido durante la ejecución de un programa. Solo que hay cajas que son exclusivas para determinados contenidos. Una caja que solo puede almacenar turrones, otra solo alfajores, no podemos almacenar turrones en una de alfajores porque los turrones se deterioran o no caben. Por eso una caja que pueden contener un numero entero es int y uno para contener un caracter es char. Hay otras cuestiones aquí de bajo nivel pero que no conviene tratarlos.

Volviendo a la actividad, debes hacer algo parecido con las tres variables tipo char. Le asignas las inciales de tus nombres y apellido, los muestra (como se pide en la actividad), cambia sus valores por otros y los vuelve a mostrar.
