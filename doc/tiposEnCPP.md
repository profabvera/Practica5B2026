## Resumen ##
En un ordenador de propósito general se pueden guardar datos de cualquier tipo. Pero, ¿a qué nos referimos cuando decimos datos? No nos vamos a complicarnos muchos con la definición, más bien vamos a mencionar algunos ejemplos. Un dato es por ejemplo la **fecha de tu nacimiento**, la **talla** que tienes al comenzar el año (o al rellenar la ficha médica para la inscripción al Bachi), el **gusto musical** (un ritmo en particular), la **frecuencia cardíaca** al realizar el eléctrocardiograma, la **temperatura corporal** al poner el termómetro cerca de nuestro cuerpo al ingresar al Bachi, el **peso** o **masa** que tenemos y observamos en la balanza y que generalmente nos desconicerta :-), el **signo de zodíaco**, el **deporte favorito**, etc. Como se puede observar, hay datos de distintas naturaleza. Hay aquellos que para indicar nos alcanza con un término, otros en cambio se necesitan números enteros, otros números reales y otros, es necesario agregar un número seguido de una unidad de medida. En fin, de esto trata este artículo.

# Tipos de Datos #
``` Un tipo de datos en una categorización de los datos. Permite clasificarlos teniendo en cuenta sus características. Por ejemplo un tipo de datos entero es un tipo que puede almacenar un número entero. Un tipo de datos string (o cadena) se refiere a una categoria de datos capaz de almancenar una cadena de texto. ```

En **C++** existen una serie de tipos llamados **tipos fundamentales** y que vienen incorporados al lenguaje. Entre esos tipos de datos fundamentales vamos a mencionar los siguientes:

 - **char:** Permite almacenar un caracter.
 - **int:** Permite almacenar un número entero.
 - **float:** Permite almacenar un número racional pero de simple precisión.
 - **double:** Igual que el anterior pero es de doble precisión.
 - **bool:** o booleano. Es un tipo lógico. Puede almacenar unicamente dos valores, un 1 o un 0  o false.
 - **void:** indica ausencia de tipo.

El tipo **char** es un **tipo de dato** que permite almacenar en memoria un caracter. Dado que un tipo necesita una porción de memoria es necesario conocer el tamaño de la memoria para almacenar ese valor. Pues bien, el tipo **char** ocupa **1 byte** de memoria. Dado que internamente se almacenan como números binarios es el compilador el que realiza la interpretación.

Vamos con un ejemplo. Para ello van a tener que aprender a construir ejecutables. Carguen en memoria el editor preferido de ustedes (Geany o nano) y escriban el siguiente programa. Guardenló en la carpeta **CPP** con el nombre **elTipoChar.cpp**. De ahora en más, el nombre con el que deben guardar una archivo fuente lo voy a poner como comentario al comenzar el mismo como se muestra en el ejemplo.

_____

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
_______

## Variable ##
Una variable es un porción de la memoria cuyo contenido cambia durante la ejecución de un programa. Una variable debe tener un **identificador**[^1] o nombre (con el cual se va a referenciar al contenido del mismo) y un **tipo**. Así el compilador sabe la cantidad de memoria necesita. Además tiene una dirección donde comienza la memoria asignada.
[^1]: Los identificadores deben respetar ciertas reglas para que sean validados por el compilador, de lo contrario producirá un error al compilar.

En la linea 6 la sentencia

```c++
char a;
```

**declara** una variable de tipo **char**. En este caso solo hay **declaración** de una variable cuyo nombre es **a** y cuyo tipo es **char**. Si queremos ver la dirección de la memoria se antepone un símblo **&** (ampersand). Ya lo veremos más adelante. La siguiente sentencia

```c++
char b='S';
```
Es una **declaración** con **definición** porque además de darle un **nombre** y un **tipo** también le estamos asignando un **valor**. En este caso el valor es la letra 'S' mayúscula. El signo ''='' es el operador de asignación. 

Para determinar el **tamaño** de un tipo de datos podemos utilizar el **operador sizeof()**[^3] que nos informa cuántos bytes ocupa una variable o una constante. Este operador untiliza argumentos (lo que va entre paréntesis) y, como pueden ver en el ejemplo, se pueden utilizar tanto los nombres de variables como los tipos para determinar su longitud o tamaño de ese tipo.

Construyan el ejecutable y ejecuten para observar lo que se muestra en pantalla. Es importante que vayan haciendo los ejemplos. Si hay errores corrijan los mismos hasta que el programa funcione.

## El Tipo int ##

El tipo **integer** o **int** es un tipo que permite almacenar números enteros. Tiene además uno especificadores que modifican su comportamiento. Estos son **signed** y **unsigned** para determinar si una variable entera es con signo o sin signo. Otro de los modificadores son aquellos que modifican la **longitud** de la memoria que ocupa, es decir, cambia la capacidad de almacenamiento de la variable. Estos especificadores son **short** y **long**. Veamos un ejemplo con este tipo de datos.

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
Los valores que muestra este programa pueden variar de acuerdo a la plataforma. En mi caso un **short int** ocupa  2 bytes, un **int** 4 bytes y un **long int** 8 bytes.

Escriban el programa anterior y construyan el ejecutable correspondiente. Comprueben el tamaño o logitud de cada tipo entero visto.

Es importante mencionar que cuando utilizamos el tipo char, la manera de asignar una valor a una variable de este tipo es con las comillas simples (En el teclado figura con el signo de cierre de interrogación). En cambio, cuando se asigna una cadena de texto a una variable de tipo **string** se utiliza comillas dobles.

Para poner en pr\'actica lo aprendido les dejo la actividad 3, muy sencilla por cierto[^2].
[^2]: En la próxima entrega veremos el tipo **float**, el tipo **double** y el tipo **bool**. Cabe aclarar que no lo vemos en profundidad, solo la forma de trabajar con estos datos, al menos en esta primera etapa. Es importante que los _programitas_ les _salga_ y puedan ejecutar correctamente.

[^3]: Es importante aclarar que esta sentencia de **C++** tiene forma de función es un **operador**





