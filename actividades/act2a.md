## Actividad 2a

Escribe un programa que declare dos variables enteras  _a_ y _b_, y una tercera llamada _suma_, que asignen a las variables _a_ y _b_ los valores 9 y 16 repectivamente. Luego la variable suma debe contener la suma de las variables a y b. Por último los muestre así: 9 + 16 = 25. Guarde los archivos fuentes como **act2a.cpp** y al ejecutable como **act2a** todo en la carpeta _CPP_. Compílelo desde el terminal y ejecútelo también desde el terminal.

- ### Objetivos de la actividad
  
  - Declarar y definir variables enteras.
  - Utilizar el operar '+' y el operador '=' (de asignación).
  - Compilar un archivo fuente desde el terminal y ejecutarlo.

- Solución
  
  ```c++
  1 #include <iostream>
  2 using namespace std;
  3
  4 int main() {
  5     int a; // declaración de la variable a
  6     int b; // Declaración de la variable b
  7     int suma; // Declaración de la variable con nombre suma;
  8     a=12, b=7;
  9     suma=a+b;
  10    cout << a << " + " << b << " = " << suma << endl;
  11    return 0;
  12 }
  ```

- ### Explicación
  
  - En la linea uno se incluye la librería (La clase) iostream que contiene las funciones de entrada y salida desde y hacia el programa. Esta librería es enorme, pero por el  momento solo nos interesa saber que gracias a esta inclusión podemos usar los objetos **cout** de console o output y **endl** que significa endl line en la linea 9.
  
  - En la línea 2 la instrucción establece que se usará el **espacio de nombres estandar.** Esta directiva hace que utilicemos la instrucción de la línea 9 tal cual está. Si no estuviese tendríamos que escribir **std::cout** y **std::endl** cada vez que usemos esas instrucciones. De igual forma es bueno ir sabiendo.  
  
  - El la linea 3 no hay nada, literal, el compilador los ingnora completamente. Es como si no existiera. Lo hacemos para separar bloques de código en aras de una mejor organización.
  
  - En la linea 4, la función **int main() {** declara y da inicio a la definición de la función principal. Todo programa ejecutable en C++ tiene una función **main().** El bloque cierra en la linea 12. Todo lo que está entre las llave "**{**" de apertura y "**}**" cierre es parte de la función principal, es decir, del programa.
  
  - Las líneas 5, 6 y 7 contiene la declaración de las variables enteras. Con ello se les dice al compilador que existe en alguna parte esta entidad que puede almacenar un número entero, que además puede cambiar de valor durante la ejecución del programa. Se pordría reducir estas instrucciones en una sola línea así 
    
    ```c++ 
    int a, b, suma;
    ```
  
  - En la línea 8 se realiza la asignación de valores a las variables a con el valor 12 y b con el valor 7. Esto se conoce como definición de variables. Si bien puede hacerse al momento de la declaración también es importante saber que puede realizarse en cualquier parte del programa. Inclusive puede sobreescribirse cualquiera de los valores más adelante. 
  
  - En la línea 9 se realizan dos cosas, por una parte se suman el contenido de las variables **a** y **b** y luego se les asigna el resultado a la variable **suma.**
  
  - La línea 10 contiene las instrucciones que nos permite sacar por pantalla en contenido de las tres variables. Tienes que observar cómo se realiza. Una instrucción **cout** abre un canal hacia el dispositivo de salida estandar. Este canal se cierra con **endl.** Cada objeto o entidad que queremos que salga por la consola debe ir precedido por **<<.** Si queremos sacar o enviar una cadena de texto (así se les llama a las palabras ) debemos ponerlos entre comillas así:  **<< "Esto sale por la consola"**. En el caso de las variables, con la instrucción **<< a** lo que hace el programa es sustituir **a** por el valor que contiene, lo mismo ocurre con la variable **b** y con  la variable  **suma.**  Por eso lo que va a mostrar la instrucción de la línea es: **12 + 7 = 19**.
  
  - En la linea 11, la instrucción return 0, devuelve el control al sistema operativo con el valor 0 que indica que se ha ejecutado correctamente. Cualquier valor distinto de 0 que se devuelva indicará al sistema operativo que ha habido un error.

- ### Una alternativa más compacta del mismo programa
  
  ```c++
  1 #include <iostream>
  2
  3 int main() {
  4     int a=12, b=7;
  5     int suma=a+b;
  6     std::cout << a << " + " << b << " = " << suma << std::endl;
  7     return 0;
  8 }
  ```
  
  - La otra forma de indicar que **cout** está en el espacio de nombre estandar es **std::cout**. El doble dos puntos se conoce como **operador de resolución de ámbito.**
  
  - observa que aquí no hemos puesto la sentencia  **using namespace std**












