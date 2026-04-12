> #### Resumen

En el artículo anterior trabajamos los tipos **char** e **int**. Ahora veremos cómo y cuándo trabajar con los tipos **float**, **double** y **bool**. También comenzaremos a definir y utilizar los operadores aritméticos así como el objeto **cin** junto al operador **>>**.

### El tipo float

El tipo de datos _float_ también llamado _de coma flotante_ se utiliza para almacenar números que tienen una parte decimal. Lo que debemos tener presente es que pueden almacenar números relativamente grandes, pero pierde precisión al operar con ellos. No obstante, para números con tres decimales no presenta inconvenientes. La forma en que se almacenan estos números es en notación científica, obviamente operando en binario. Una parte de la memoria asignada a la variable se utiliza para la base o mantiza y otra para el exponente. De los 32 bits ( 4  bytes ) que utiliza este tipo, 1 bit se usa para el signo de la base, otro para el signo del exponente, 7 para representar el exponente y 23 bits para la mantiza. Con estos datos podemos inferir que se pueden representar números **muy grandes**.

```cpp
1  //elTipoFloat.cpp  
2  #include <iostream>
3  using namespace std;
4
5  int main() {
6   float x; // Declaración sin definición
7   float y=1.456; // Inicialización
8   x=258974.47841; // Asignacón
9   float suma=x+y;
10  cout << "x vale: " << x << endl;
11  cout << "y vale: " << y << endl;
12  cout << "-----------------------" << endl;
13  cout << "suma vale: " << suma << endl;
14    
15  cout << "El tamanio de x " << sizeof(x) << " bytes " << endl;
16  cout << "El tamanio de y " << sizeof(y) << " bytes " << endl;
17  cout << "El tamanio de un float es: " << sizeof(float) << " bytes " <<endl; 
18  return 0;
19 }
```

Y ¿Para qué podemos utilizar un _float_? Pues todos aquellos casos en el cuáles la precisión no es algo a considerar. Se podría utilizar un _float_ por ejemplo para representar una cantidad monetaria, para representar longitudes, áreas y volumenes o capacidades, etc. En realidad es el **programador** o el **diseñador**  quien debe ser capaz de evaluar su uso. Debe tenerlo presente y es muy probable que encuentre muchas situaciones en las cuáles es conveniente su uso, sobre todo porque utiliza la mitad de la memoria que utiliza un tipo **double**, el otro tipo que permite almacenar números reales.

El la línea 15, 16 y 17 del ejemplo, el operador _sizeof()_ devuelve el tamaño en bytes que ocupa un tipo o una variable de un determinado tipo. Como argumento del operador puede figurar el _nombre de la variable_ o bien el _tipo_. Si tenemos una variable _a_ de tipo char, _sizeof(a)_ retorna un $1$, lo mismo sucede si ponemos _sizeof(char)_.

| Símbolos | Operación      | Ejemplo | Resultado      |
| -------- | -------------- | ------- | -------------- |
| +        | Adición        | 5+8     | 13             |
| -        | Sustracción    | a-6     | -4 si a vale 2 |
| *        | Multiplicación | 3*8     | 24             |
| /        | División       | 24/8    | 3              |
| %        | Módulo         | 25%8    | 1              |

De la tabla anterior vamos a analizar algunos ejemplos con el operador % u operador de módulo. Este es un operador que necesita dos operandos, ya que retorna el resto de una división, esos operandos necesariamente deben ser números enteros y, obviamente, el resultado también es un número entero. Veamos un ejemplo para que quede más claro.

```cpp
1 ...
2   int a=9;
3   int b=5; 
4   int r=a%b; // r contiene el valor 4, decimos que r es igual a 4.
5   int c=a/b; // c contiene el valor 1, decimos que c es igual a 1.
6   r=b%a;    // r contiene el valor 5 
7   c=b/a;    // c contiene el valor 0
8 ...
```

En la línea número 2 **declaramos** una variable de tipo **entera** *a* y, al mismo tiempo, le asignamos el valor 9. Esto es realidad es una **inicialización**. El objeto se crea con ese valor.

El operador de asignación es el símbolo ''='' y **debe quedar claro que no es una igualdad**. En la línea 3 sucede los mismo con la variable *b*.

En la línea 4 se halla el **módulo** o **resto** de la división entre *a* y *b* y se le asigna a la variable entera *r*. Por último, en la línea 5 se halla el cociente entre *a* y *b* para luego asignarle ese resultado a la variable entera *c*. Queda para ustedes pensar por qué en las dos últimas líneas cambian los valores de *r* y *c*.

Veamos para qué nos puede servir el operador de módulo que venimos analizando. Y qué mejor que hacerlo con un pequeño programa.

> **Ejemplo** 
> 
> Escriba un programa que determine si un número ingresado por el usuario es divisible por, pongámosle 17.

```cpp
1  #include <iostream>
2  using namespace std;
3
4  int main() {
5     cout << "\t ***************************************" << endl;
6     cout << "\t *  Este programa nos indica si un * " << endl;
7     cout << "\t *  número es multiplo por 17  * "  << endl;
8     cout << "\t ***************************************" << endl;
9     int a=0;
10    cout << "Escriba un numero entero: ";
11    cin >> a;
12    if(a%17==0){
13       cout << "El valor ingresado es multiplo de 17" << endl;
14    } else {
15       cout << "El valor que acabas de ingresar no es multiplo de 17" << endl;
16    }
17    return 0;
18 }    
```

En este bloque de código se utiliza, en la línea $11$, el objeto **cin** junto al símbolo **>>** llamado _operador  de inserción en el flujo de entrada_.  La expresión **cin >> a** pone el número que escribe el usuario en la variable entera _a_. 

### El tipo double

Cuando en un programa necesitamos variables reales y precisión en los cálculos es indispensable trabajar con este tipo de datos. Utiliza el doble de memoria que un float. Esa mayor cantidad de recursos los utiliza para ampliar el rango de la mantiza y también del exponente. Una variante permite ampliar aún más ese rango gracias a que agrega otros 4 bytes. Esa variante se llama _especificador_ y se escribe antes del nombre de la variable al declararlas.

```cpp
1  //elTipoDouble.cpp
2  #include <iostream>
3  using namespace std;
4
5  int main() {
6     double x=67898766545455.5678;
7     double y=23456789435765.45;
8     double suma=x+y;
9     cout << "El valor de x es: " << x << endl;
10    cout << "El valor de y es: " << y << endl;
11    cout << "---------------------------" << endl;
12    cout << "La suma es: " << suma << endl;
13    cout << "El tamanio de x es: " << sizeof(x) << endl;
14    cout << "El tamanio de y es: " << sizeof(y) << endl;
15    cout << "El tamanio de suma es: " << sizeof(suma) << endl;
16    cout << "------------------------------" << endl;
17    cout << "El long double es muy, pero muy grande! " << endl;
18    long double d=15874895774821478456111578545.24;
19    cout << "El valor de d es: "<< d << endl;
20    cout << "El tamanio de un long double es: " << sizeof(long double) << endl;
21    return 0;
22  }
```

El tipo **long double** tiene el doble de precisión que un double, pero esto varía de acuerdo a las arquitecturas. En microprocesadores de 32 bits un **long double** tiene 12  bytes y en las de 64 bits tiene 16 bytes. Es decir, pueden almacenar números enormes.

### El tipo bool

El tipo **bool**  o **booleano** permite almacenar únicamente dos valores distintos, un 1 o un 0  o **true** o **false**. Son de uso muy frecuente para la toma decisiones dentro de los algoritmos con estructuras de decisión. Utiliza un solo byte para almacenar dicho valor.

> **Ejemplo de tipo bool**
> 
> Escriba un programa que solicita al usuario el ingreso un un número entero. El programa debe determinar si el número ingresado es par o impar y enviar el mensaje: "*El númeor x es par*" o "*El número es impar*" siendo *x* el número ingresado por el usuario.

```cpp
//ejemTipoBool.cpp
#include <iostream>
using namespace std;

int main(){

   cout << "\t ****************************************" << endl;
   cout << "\t *    Este programa nos indica si un     *" << endl;
   cout << "\t *    numero es par o impar.    *" << endl;
   cout << "\t ****************************************" << endl;
   int a=1;
   bool p=false;
   cout << "Escriba un numero entero: ";
   cin >> a;
   if(a%2==0){
      p=true;
   }
   if(p){
      cout << "\n\tEl numero " << a << " es par " <<endl;
   } else {
      cout << "\n\tGuau! El numero " << a << " es impar! " << endl;
   }
   return 0;
}
```

En este caso si *p* vale 1 _p_ es verdadero, si _p_ vale 0  _p_ resulta _falso_. Ten en cuenta que **a%2==0**  es **1**  o **true** cuando **a**  es par y **0** o **false** cuando **a** es impar.
