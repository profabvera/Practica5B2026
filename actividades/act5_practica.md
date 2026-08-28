# Actividades de práctica

Estas actividades deben realizarse **sin utilizar IA**. El objetivo es comprobar cuánto has aprendido hasta ahora y enfrentarte a pequeños retos de programación por tu cuenta.

No se busca solamente que el programa funcione: también es importante que puedas **comprender y explicar el código que escribiste**.

---

### Actividad 1 - Lista de divisores

Escribe un programa que encuentre todos los divisores de un número entero positivo ingresado por el usuario y los muestre en forma de lista.

El número ingresado debe estar comprendido entre **1 y 1000, inclusive**. El programa no deberá aceptar valores fuera de ese rango.

Si el usuario ingresa un valor fuera del rango permitido, el programa podrá mostrar un mensaje indicando el error y volver a solicitar el ingreso de un número.

Por ejemplo, para el número `12`, el programa debería mostrar:

```
Divisores de 12:1 2 3 4 6 12
```

---

### Actividad 2 - Adivina la clave

Escribe un programa que solicite al usuario una **clave de tres dígitos**.

El programa deberá proporcionar pistas que permitan descubrir la clave. Por ejemplo:

- “Tres números pares consecutivos. El último es 8.”
- “Potencia de 5 comprendida entre 100 y 500.”

El usuario dispondrá de **hasta 5 intentos** para ingresar la clave correcta.

Si encuentra la clave antes de agotar los intentos, el programa deberá mostrar un mensaje felicitándolo por haberla descubierto y finalizar.

Si después de los 5 intentos no logra descubrirla, el programa deberá mostrar un mensaje animándolo a leer con mayor atención las pistas y luego finalizar.

---

### Actividad 3 - Cálculo de potencias

scribe un programa que calcule la potencia de un número ingresado por el usuario.

Para realizar el cálculo, el programa deberá solicitar:

1. La **base**.
2. El **exponente**.

Por ejemplo, para calcular (2^5), el usuario deberá ingresar:

```
Base: 2 Exponente: 5
```

El programa deberá mostrar el resultado de manera similar a:

```
2 elevado a la 5 es: 32
```

De manera general:

```
a elevado a la n es: b
```

donde:

- `a` es la base.
- `n` es el exponente.
- `b` es la potencia.

El programa deberá permitir realizar **tantos cálculos como el usuario desee**.

Después de cada cálculo, deberá preguntar si desea:

- realizar otro cálculo, o
- finalizar el programa.

El programa continuará realizando cálculos hasta que el usuario decida salir.

---

### Actividad 4 - Sencillitos

Escribe un programa ingrese dos números enteros y muestre su suma. La salida en pantalla debe ser algo parecido a esto:

```bash
12 + 24 = 36
```

Si el usuario ingresó el `12` y el `24` . Has que esta operación pueda realizarse mientras el usuario lo desea, es decir, a cada paso el programa preguntará al usuario si desea realizar otro cálculo o, en su defecto, salir.  Pon un encabezado indicando lo que hace el programa. Utiliza la sentencia `system("clear");` de la librería `cstdlib` para limpieza de pantalla cada vez que se quiera hacer otro cálculo.

---

### Actividad 5 - Trabajando con el bucle for

Escribe un programa que pida al usuario dos números entero entre 10 y 100, estos inclusive. Has que se muestren todos los números pares dentro del rango de valores que ingresó el usuario. Utiliza para ello la sentencia `for` Supongamos que el usuario ingresó 25 y 35 el programa mostrará el mensaje. 

Los números pares entre `25`y `35` son:

```bash
26 28 30 32 34
```

---

### Actividad 6 - Busque de múltiplo en un rango de valores

Este programa buscará e imprimirá en pantalla en forma de lista los múltiplos de un número ingresado por el usuario dentro de un rango de valores, también ingresado por el usuario.

Por ejemplo, el usuario Evaristo quire que su computara muestre los múltiplos de 17 entre 1000 y 2000. El programa pedirá a evaristo estos tres números y mostrará en forma de lista los múltplos de 17 dentro de ese rango. Puede mostrar el siguiente mensaje.

Los múltiplos de 17 entre 1000 y 2000 son: ... 

No hay una única forma de hacerlo, como en la mayoría de las actividades.

---

### `La serie continua :-)`
