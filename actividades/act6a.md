# Rectángulos y funciones en C++

## Propósito de las actividades

En esta secuencia desarrollarás distintas versiones de un programa que trabaja con las medidas de un rectángulo.

En cada actividad el programa incorporará una mejora. El objetivo no es solamente resolver los cálculos matemáticos, sino observar cómo podemos **organizar cada vez mejor un programa**.

Trabajaremos con:

- base;
- altura;
- perímetro;
- área;
- diagonal.

---

### Importante

Guarda las tres versiones en archivos separados: `act6a1.cpp`, `act6a2.cpp` y `act6a3.cpp`. Conserva cada versión para poder comparar su evolución.

Utiliza `double` para las medidas y los resultados. Escribe los decimales con punto en el código y al ingresarlos por teclado: por ejemplo, `3.5`. Todas las longitudes estarán expresadas en centímetros.

---

# Actividad 1 — Nuestro primer rectángulo

Un rectángulo tiene las siguientes dimensiones:

- **Base:** 3,5 cm
- **Altura:** 2,4 cm

Escribe un programa en C++ que almacene estos valores y muestre en pantalla:

1. la base;
2. la altura;
3. el perímetro;
4. el área;
5. la longitud de la diagonal.

Acompaña las longitudes y el perímetro con `cm`, y el área con `cm²`. En esta primera actividad las medidas ya son conocidas y positivas; la validación de los datos ingresados se incorporará en la actividad 2.

## Fórmulas necesarias

### Perímetro

$$
P=2(b+h)
$$

### Área

$$
A=b\cdot h
$$

### Diagonal

Para calcular la diagonal puedes aplicar el **teorema de Pitágoras**:

$$
d=\sqrt{b^2+h^2}
$$

donde `b` es la base y `h` la altura.

## Una herramienta nueva: `<cmath>`

C++ dispone de funciones matemáticas que no están incluidas directamente mediante `<iostream>`.

Para utilizarlas debes agregar:

```cpp
#include <cmath>
```

La función:

```cpp
std::sqrt(x)
```

calcula la raíz cuadrada de `x`.

Por ejemplo:

```cpp
double resultado = std::sqrt(25);
```

almacenará `5` en `resultado`.

### Importante

Para elevar al cuadrado una variable no necesitas una función especial. Puedes multiplicarla por sí misma:

```cpp
base * base
```

## Antes de programar

Identifica qué variables necesitarás.

Piensa especialmente:

- ¿Qué tipo de dato utilizarías para almacenar `3.5` y `2.4`?
- ¿Los resultados siempre serán números enteros?
- ¿Qué datos son conocidos inicialmente?
- ¿Qué valores debe calcular el programa?

## Prueba del programa

Compila utilizando C++20:

```bash
g++ -std=c++20 act6a1.cpp -o act6a1
```

Ejecuta:

```bash
./act6a1
```

Comprueba manualmente los resultados: el perímetro debe ser `11.8 cm`, el área `8.4 cm²` y la diagonal aproximadamente `4.244 cm`. No es necesario que el programa muestre exactamente la misma cantidad de decimales.

### Recomendación de compilación para las tres actividades

Utiliza `-std=c++20` para indicar explícitamente el estándar de C++ con el que trabajamos. Para las actividades 2 y 3, reemplaza los nombres del archivo fuente y del ejecutable por los correspondientes.

Si la compilación falla, lee el mensaje de error: puede deberse a un error en el código, a un nombre de archivo incorrecto o a una opción no reconocida. **Un error de compilación no demuestra por sí solo que el compilador esté desactualizado.**

Si el compilador indica específicamente que no reconoce `-std=c++20`, consulta al docente. Estas actividades usan recursos básicos que también permiten trabajar con C++11:

```bash
g++ -std=c++11 act6a1.cpp -o act6a1
```

También es posible compilar sin seleccionar el estándar:

```bash
g++ act6a1.cpp -o act6a1
```

En ese caso se utiliza el estándar predeterminado del compilador, que puede variar entre versiones. Por eso recomendamos mantener `-std=c++20` cuando esté disponible. Ejecuta el programa después de que la compilación termine sin errores.

---

# Actividad 2 — Rectángulos de cualquier tamaño

El programa anterior solamente puede trabajar con un rectángulo cuyas medidas fueron establecidas por el programador.

Modifícalo para que ahora sea el **usuario quien introduzca la base y la altura mediante el teclado**.

El programa deberá:

1. solicitar y validar la base;
2. solicitar y validar la altura;
3. calcular el perímetro;
4. calcular el área;
5. calcular la diagonal;
6. mostrar todos los resultados.

## Validar antes de calcular

La base y la altura deben ser **números mayores que cero**. Valida cada medida por separado:

- Si el usuario ingresa `0` o un número negativo, muestra: `La medida debe ser mayor que cero. Intente nuevamente.`
- Si ingresa una entrada no numérica, como `hola`, muestra: `Entrada inválida. Ingrese un número, por ejemplo 3.5.`
- Repite la solicitud de esa medida hasta obtener un valor válido.
- Realiza los cálculos únicamente cuando ambas medidas sean válidas.

Para esta actividad, ingresa un número por línea y utiliza punto para los decimales. No es necesario construir un analizador de texto: trabajaremos con la comprobación básica de lectura de `std::cin`. Esta comprobación detecta entradas como `hola`, pero no valida toda la línea: por ejemplo, puede leer el número inicial de `3abc`. Para estas pruebas ingresa números completos, sin texto añadido.

### ¿Qué ocurre si se ingresan letras?

Al intentar leer un número, `std::cin` puede quedar en estado de error. Para volver a leer debes restablecer su estado y descartar la entrada incorrecta.

Agrega:

```cpp
#include <limits>
```

Este fragmento muestra cómo comprobar una lectura; intégralo en una estructura repetitiva para volver a solicitar la medida:

```cpp
std::cout << "Ingrese la base en cm (mayor que cero): ";
if (!(std::cin >> base)) {
    if (std::cin.eof() || std::cin.bad()) {
        std::cout << "No se pueden leer más datos. Fin del programa.\n";
        return 0; // Este fragmento se utiliza dentro de main().
    }

    std::cout << "Entrada inválida. Ingrese un número, por ejemplo 3.5.\n";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
} else if (base <= 0) {
    std::cout << "La medida debe ser mayor que cero. Intente nuevamente.\n";
} else {
    // La base es válida: puedes continuar con la altura.
}
```

- `clear()` restablece el estado de la entrada.
- `ignore(..., '\n')` descarta lo que queda en la línea incorrecta.
- `eof()` permite detectar que terminó la entrada; en ese caso finaliza el programa para evitar repetir indefinidamente la solicitud.

Aplica el mismo criterio a la altura. Conserva la base válida si debes volver a pedir solamente la altura.

## Una condición adicional

Después de mostrar los resultados, el programa deberá preguntar al usuario si desea calcular otro rectángulo.

Por ejemplo:

```text
¿Desea calcular otro rectángulo? (s/n):
```

Lee la respuesta en una variable de tipo `std::string` (incluye `<string>`) y compara el texto completo:

- Si responde `s` o `S`, solicita nuevamente la base y la altura.
- Si responde `n` o `N`, muestra `Fin del programa.` y finaliza.
- Ante cualquier otra respuesta, como `x` o `si`, muestra `Respuesta inválida. Escriba s para continuar o n para finalizar.` y repite solamente la pregunta de continuación.
- Si la lectura no puede continuar porque terminó la entrada, finaliza el programa.

La pregunta espera una sola respuesta por línea. No interpretes una respuesta inválida como si fuera `n`.

Por lo tanto, el esquema general será:

```text
INICIO

    solicitar base y altura hasta que ambas sean válidas

    realizar cálculos

    mostrar resultados

    preguntar si desea continuar hasta obtener s/S o n/N

    si desea continuar
        repetir

FIN
```

## Piensa antes de elegir la estructura

Ya conoces estructuras repetitivas como:

- `while`
- `do...while`
- `for`

¿Cuál consideras más apropiada si queremos que el conjunto de instrucciones se ejecute **al menos una vez**?

Justifica tu elección.

## Prueba tu solución

No pruebes únicamente un caso.

Por ejemplo:

| Base | Altura | ¿Qué deberías comprobar?  |
| ----:| ------:| ------------------------- |
| 3.5  | 2.4    | Caso original             |
| 5    | 5      | Base y altura iguales     |
| 3    | 4      | La diagonal debería ser 5 |
| 10   | 2      | Rectángulo alargado       |

También comprueba que puedas realizar varios cálculos sin volver a ejecutar manualmente el programa.

Prueba las validaciones:

| Entrada o situación | Comportamiento esperado |
| --- | --- |
| Base `0` o `-3` | Rechazarla y volver a solicitar la base |
| Altura `0` o `-2` | Rechazarla y volver a solicitar la altura |
| `hola` en una medida y luego `4` | Mostrar el error, recuperar la lectura y aceptar `4` |
| `x` o `si` al preguntar si continúa | Repetir la pregunta sin iniciar otro cálculo |
| `s` o `S` | Calcular otro rectángulo |
| `n` o `N` | Finalizar |
| Fin de la entrada | Finalizar sin quedar en un ciclo infinito |

Verifica que nunca se calculen resultados con medidas rechazadas.

---

# Actividad 3 — Dividir el trabajo

Observa el `main()` de la actividad anterior.

Dentro de él probablemente estás realizando varias tareas diferentes:

- solicitar y validar datos;
- calcular el perímetro, el área y la diagonal;
- mostrar los resultados;
- decidir si se repite el proceso.

El programa funciona, pero vamos a intentar **separar sus responsabilidades**.

## El nuevo objetivo

Guarda esta versión como `act6a3.cpp` y conserva todas las validaciones y la repetición de la actividad 2.

Crea tres funciones con las siguientes declaraciones:

```cpp
double calcularPerimetro(double base, double altura);
double calcularArea(double base, double altura);
double calcularDiagonal(double base, double altura);
```

Puedes definirlas antes de `main()`. Si las defines después, coloca estas declaraciones antes de `main()` para que el compilador las conozca cuando se invoquen.

Cada función deberá realizar **solamente el cálculo que indica su nombre**.

Por ejemplo, la función encargada del área:

- recibe la base;
- recibe la altura;
- calcula el área;
- devuelve el resultado.

No deberá pedir datos mediante `std::cin` ni mostrar resultados mediante `std::cout`.

---

# Anatomía de una función

Una función que recibe dos números reales y devuelve otro número real tendrá una estructura semejante a:

```cpp
double nombreFuncion(double dato1, double dato2) {
    double resultado = dato1 + dato2; // Ejemplo de cálculo.
    return resultado;
}
```

Este ejemplo suma dos valores para mostrar la estructura; en tus funciones utiliza la fórmula correspondiente al rectángulo.

Observa sus partes:

| Parte | Ejemplo | Responsabilidad |
| --- | --- | --- |
| Tipo de retorno | `double` | Indicar el tipo del resultado |
| Nombre | `nombreFuncion` | Identificar la operación |
| Parámetros | `double dato1, double dato2` | Recibir los datos necesarios |

### Tipo de retorno

Indica qué clase de dato devolverá la función.

```cpp
double
```

indica que devolverá un número real.

### Nombre

Debe expresar claramente qué hace la función.

Por ejemplo:

```cpp
calcularPerimetro
```

es mucho más informativo que un nombre como:

```cpp
calcular
```

### Parámetros

Son los datos que la función necesita para realizar su trabajo.

Pregúntate:

> ¿Qué datos necesita conocer `calcularDiagonal()` para poder realizar su cálculo?

### `return`

Permite devolver el resultado obtenido.

Su estructura general es:

```cpp
return expresion;
```

---

# Reorganiza tu programa

Después de crear las tres funciones, `main()` ya **no deberá contener las fórmulas matemáticas** para calcular el área, el perímetro o la diagonal.

En su lugar deberá solicitar el trabajo a las funciones correspondientes.

El nuevo esquema será aproximadamente:

`main()` recibe los datos, llama a cada función con la base y la altura, y muestra los resultados que estas devuelven.

Dentro de `main()` deberán permanecer principalmente:

- la entrada y la validación de los datos;
- la presentación de los resultados;
- el control que permite repetir el programa.

Las funciones se ocuparán de los cálculos y recibirán medidas que `main()` ya validó como positivas.

Por ejemplo, para solicitar el cálculo del área:

```cpp
double area = calcularArea(base, altura);
```

Vuelve a ejecutar las pruebas de la actividad 2: reorganizar el código debe conservar su comportamiento.

---

# ¿Por qué estamos haciendo esto?

En un programa pequeño puede parecer innecesario separar tres operaciones matemáticas tan sencillas.

Pero imagina un programa con:

- 2.000 líneas;
- 50 cálculos diferentes;
- distintos tipos de datos;
- diferentes formas de presentar los resultados.

Tener todo dentro de `main()` haría cada vez más difícil comprender y modificar el programa.

Una estrategia fundamental de programación consiste en:

> **dividir un problema grande en problemas más pequeños y asignar a cada parte una responsabilidad clara.**

Este proceso constituye un primer acercamiento a la **modularización**.

---

# Comprueba la separación

Una vez terminado tu programa, analiza cada función y responde:

1. ¿Qué datos recibe?
2. ¿Qué operación realiza?
3. ¿Qué dato devuelve?
4. ¿Utiliza `std::cin`?
5. ¿Utiliza `std::cout`?
6. ¿Podría utilizarse esa función en otro programa?

Luego analiza `main()`:

1. ¿Continúan apareciendo dentro de él las fórmulas matemáticas?
2. ¿Quién controla ahora la repetición?
3. ¿Quién se comunica con el usuario?
4. ¿Quién realiza cada cálculo?

---

# Prueba individual de las funciones

Una ventaja de separar los cálculos es que puedes comprobarlos independientemente.

Diseña al menos una prueba para cada función.

Completa:

| Función               | Base | Altura | Resultado esperado |
| --------------------- | ----:| ------:| ------------------:|
| `calcularPerimetro()` |      |        |                    |
| `calcularArea()`      |      |        |                    |
| `calcularDiagonal()`  | 3    | 4      | 5                  |

Elige valores para los cuales puedas calcular fácilmente el resultado esperado antes de ejecutar el programa.

---

# Para reflexionar

Las tres actividades resolvieron esencialmente el mismo problema matemático, pero el programa fue evolucionando:

| Actividad | Origen de los datos | Organización de los cálculos | Repetición |
| --- | --- | --- | --- |
| 1 | Medidas fijas | Fórmulas dentro de `main()` | No |
| 2 | Teclado, con validación | Fórmulas dentro de `main()` | Sí |
| 3 | Teclado, con validación | Funciones especializadas | Sí |

Responde con tus palabras:

> **¿Qué ventajas encuentras en la tercera versión respecto de la segunda, si ambas producen exactamente los mismos resultados?**

---

## Desafío adicional

Un cuadrado es un caso particular de rectángulo en el que la base y la altura tienen la misma longitud.

Agrega una función:

```cpp
bool esCuadrado(double base, double altura);
```

La función deberá determinar si el rectángulo ingresado es también un cuadrado.

Antes de implementarla, investiga o recuerda:

- ¿qué valores puede almacenar un `bool`?
- ¿qué tipo de dato debería devolver entonces `esCuadrado()`?
- ¿necesitas modificar `calcularArea()`, `calcularPerimetro()` o `calcularDiagonal()` para incorporar esta nueva característica?

Si puedes agregar una nueva función **sin modificar las anteriores**, has descubierto una de las ventajas que obtendremos al organizar correctamente nuestros programas.