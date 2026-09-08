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

Las tres versiones de la actividad que se proponen lo llamaremos `act6a1.cpp`, `act6a2.cpp` y `act6a3.cpp` 

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
d=\frac{-b \pm \sqrt{b^2-4ac}}{2\cdot a}
$$

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

Comprueba manualmente al menos el área y el perímetro para verificar que el programa produzca resultados correctos. Si no compila usando la opción `std=c++20` significa que el compilador no está actualizado. Compila sin esa opción.

---

# Actividad 2 — Rectángulos de cualquier tamaño

El programa anterior solamente puede trabajar con un rectángulo cuyas medidas fueron establecidas por el programador.

Modifícalo para que ahora sea el **usuario quien introduzca la base y la altura mediante el teclado**.

El programa deberá:

1. solicitar la base;
2. solicitar la altura;
3. calcular el perímetro;
4. calcular el área;
5. calcular la diagonal;
6. mostrar todos los resultados.

## Una condición adicional

Después de mostrar los resultados, el programa deberá preguntar al usuario si desea calcular otro rectángulo.

Por ejemplo:

```text
¿Desea calcular otro rectángulo? (s/n):
```

Si responde `s`, el programa deberá solicitar nuevamente la base y la altura.

Si responde `n`, deberá finalizar.

Por lo tanto, el esquema general será:

```text
INICIO

    solicitar base y altura

    realizar cálculos

    mostrar resultados

    preguntar si desea continuar

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

---

# Actividad 3 — Dividir el trabajo

Observa el `main()` de la actividad anterior.

Dentro de él probablemente estás realizando varias tareas diferentes:

```text
main()
 |
 +-- solicitar datos
 |
 +-- calcular perímetro
 |
 +-- calcular área
 |
 +-- calcular diagonal
 |
 +-- mostrar resultados
 |
 +-- decidir si continuar
```

El programa funciona, pero vamos a intentar **separar sus responsabilidades**.

## El nuevo objetivo

Crea tres funciones:

```cpp
calcularPerimetro()
calcularArea()
calcularDiagonal()
```

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
    // realizar el cálculo

    return resultado;
}
```

Observa sus partes:

```text
double   nombreFuncion   (double dato1, double dato2)
  ↑            ↑                       ↑
retorno      nombre                 parámetros
```

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

```text
                 +--> calcularPerimetro()
                 |
Usuario --> main +--> calcularArea()
                 |
                 +--> calcularDiagonal()
                 |
                 v
              resultados
```

Dentro de `main()` deberán permanecer principalmente:

- la entrada de datos;
- la presentación de los resultados;
- el control que permite repetir el programa.

Las funciones se ocuparán de los cálculos.

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

```text
ACTIVIDAD 1
datos fijos
    ↓
cálculos
    ↓
resultados


ACTIVIDAD 2
datos del usuario
    ↓
cálculos
    ↓
resultados
    ↓
repetición


ACTIVIDAD 3
datos del usuario
    ↓
   main()
    ↓
funciones especializadas
    ↓
resultados
    ↓
repetición
```

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