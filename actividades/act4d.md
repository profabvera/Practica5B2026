### Actividad 4d

---

En una institución educativa se decidió utilizar calificaciones cualitativas ordenadas en una escala ordinal. El criterio establecido es el siguiente:

- **Excelente o Sobresaliente:** el alumno domina la materia de forma excepcional, sin errores o con una creatividad sobresaliente. La puntuación obtenida en la evaluación es superior a 90 puntos.

- **Distinguido o Notable:** el estudiante cumple con los objetivos de manera muy superior a la media, con un entendimiento muy claro y errores mínimos. La puntuación obtenida es superior a 80 y hasta 90 puntos inclusive.

- **Bueno:** cumple satisfactoriamente con los requisitos y comprende los conceptos básicos, aunque puede requerir mayor profundidad. La puntuación obtenida es superior a 70 y hasta 80 puntos inclusive.

- **Suficiente o En Proceso:** el aprendizaje es el mínimo necesario para aprobar o el estudiante está en camino de lograrlo, pero requiere afianzar algunos conceptos. La puntuación obtenida es mayor o igual a 60 y hasta 70 puntos inclusive.

- **Insuficiente o Deficiente:** no se alcanzan los objetivos mínimos requeridos. La puntuación obtenida es inferior a 60 puntos.

**Actividad**

Escriba un programa que indique la calificación **cualitativa** de un alumno en función de los puntos obtenidos en un examen.

El usuario deberá ingresar la puntuación obtenida y el programa mostrará la calificación correspondiente.

Guarde el archivo fuente con el nombre **act4d.cpp** y genere un ejecutable llamado **act4d**.

**Importante:** si el valor ingresado está fuera del rango permitido (menor que 0 o mayor que 100), el programa deberá mostrar el siguiente mensaje:

```
¡El dato ingresado está fuera del rango de calificación!
```

---

### Análisis

Como toda situación problemática, hay múltiples formas de resolverlos, en este caso la idea es aplicar la estructura de selección **if else-if else-if ... else** para ralizar la selección de la categoría correcta. Podemos ralizar primero una validación para determinar si el valor está dentro del rango de calificaciónes válidas o directamente evaluar si el valor ingresado está dentro de algunos rangos de calificación. Nos inclinamos por esta segunda opción.

El criterio elegido en este caso es utilizar dos variables de tipo string, uno para almacentar la calificación y otro para almacenar un mensaje en el caso de que el valor esté fuera del rango de calificación.

```cpp
...
std::string calif="";
std::string msg="";

if(a > 90 && a <= 100){
    calif="Sobresaliente";
} else if(a > 80 && a <= 90) {
    calif="Distinguido"
}
...

else {
    /// En este sección se ingresa si ninguna de las anteriores
    /// resultó verdadera.
    msg="¡El dato ingresado está fuera del rango de calificación!"
}
```

Por último debemos mostrar la calificación o el mensaje de dato fuera de rango. Podemos hacerlo también con un if-else.

```cpp
if(calif!=""){
    /// bloque con la calificación    
} else {
    /// Bloque con mensaje de dato fuera de rango.
}
```

Si un alumno obtiene un puntaje que sea mayor que noventa **y** menor o igual que cien la calificación debe ser **sobresaliente** .

La expresión *(a > 90 && a <= 100)* significa en lenguaje coloquial: "*Si a es mayor que noventa y menor o igual que cien*". Es una expresión lógica que determina la ejecución o no de ese bloque de código encerrado entre las llaves después del if. Esa expresión devuelve un valor lógico que resulta ser **true** o **false**.

La expresión `(a > 90 && a <= 100)` es una **expresión lógica compuesta**. Está formada por dos expresiones relacionales (`a > 90` y `a <= 100`) unidas por el operador lógico **Y** (`&&`). El resultado de la expresión puede ser **verdadero** o **falso**.

En C++ el operador Y suele mencionarse como **AND** y en lógica proposicional sule indicarse con el símbolo ∧. La siguiente tabla muestra las distintas formas de indicar estos conectores.

```bash
+--------------+------------------+------------+--------------------+
| Nombre       | Símbolo lógico   | C++        | Tipo de operador   |
+--------------+------------------+------------+--------------------+
| Y (AND)      | ∧                | &&         | Conjunción         |
| O (OR)       | ∨                | ||         | Disyunción         |
| NO (NOT)     | ¬                | !          | Negación           |
+--------------+------------------+------------+--------------------+
```

Cada una de las expresiones relacionales en las cuáles interviene una variable no es, estrictamente hablando, una proposición, es una **función proposiciónal** que puede decirse verdadero o falso solamente cuando se le asigna un valor, cosa que ocurre en tiempo de ejecución. En bibliografía de programación se acontumbra a llamarlo expresión relacional y también expresión condiconal.

La siguiente tabla es conocido como **tabla de verdad** y debe contemplar de forma abstracta todas las posibilidades. Para un caso concreto no siempre tiene sentido.

Para el caso que venimos analizando, la primera proposición se expresa así   *p : a > 90* y la segunda  *q : a <= 100*, y la expresión compuesta  *p ∧ q*.  Con ello, la tabla de verdad queda así.

```bash
+---------+-----------+-----------+
|   p     |   q       |   p ∧ q   |
+---------+-----------+-----------+
| Falso   | Falso     | Falso     |
| Falso   | Verdad    | Falso     |
| Verdad  | Falso     | Falso     |
| Verdad  | Verdad    | Verdad    |
+---------+-----------+-----------+
```

¿Cómo debemos leerlo?

- Si *p* es falso y *q* es falso entonces *p ∧ q* es falso. (1ra fila)

- Si *p*  es falso y *q* es verdadero entonces *p ∧ q* es falso (2da fila) 

- Si *p* es verdadero y *q* es falso entonces  *p ∧ q* es falso (3ra fila) y

- Si *p* es verdadero y *q* es verdadero entonces  *p ∧ q* es verdadero (4ta fila)

Esto significa que para que la expresión condicional resulte verdadera las dos expresiones más simples deben ser también verdadera. Eso es algo que caracteriza a las expresiones de tipo AND. Hay otras características particulares cuando se baja a la programación y la forma cómo se evalúan estas expresiones, pero lo dejamos para etapas más avanzadas. Por ahora, para comprender nuestro ejemplo es suficiente.

En la siguiente sección hay otro bloque **if else**. La expresión condicional  **calif!=""** significa: Si la variable calif es distinto de vacío se ejecutará el bloque de código ya que la evaluación lógica será verdadero y contendrá la calificación. Si por el contrario, no es distinta de vacia ese bloque nunca se ejecutará ya que la expresión será false.

---

###### Observación:

En la primera fila de la tabla figura para *a > 90* falso, lo cual significa que *a* debe ser igual o menor que 90, por lo tanto también es menor que 100, en consecuencia no puede ser falso, sin embargo una tabla de verdad es abstracta y debe contemplas estas posbilidades.

---

###### La tabla con ejemplos

```bash
+------+---------+-----------+--------------------+
|  a   | a > 90  | a <= 100  | a > 90 && a <= 100 |
+------+---------+-----------+--------------------+
|  50  | Falso   | Verdad    | Falso              |
|  90  | Falso   | Verdad    | Falso              |
|  91  | Verdad  | Verdad    | Verdad             |
|  95  | Verdad  | Verdad    | Verdad             |
| 100  | Verdad  | Verdad    | Verdad             |
| 101  | Verdad  | Falso     | Falso              |
| 120  | Verdad  | Falso     | Falso              |
+------+---------+-----------+--------------------+
```



Luego agregaremos aquí el análisis conrrespondiente a la disjunción
