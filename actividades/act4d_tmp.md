Lo que debemos destacar en este ejemplo es la utilzación de una expresión lógica compuesta mediante un conector lógico, el "y" lógico (&&) y el "o" lógico (||).

Analicemos la **condición** del primer **if**. La expresión *if (a < 0 || a > 100 )* significa "Si *a* es menor que cero o *a* es mayor que cien" Cualquiere de las dos concidiones que se cumpla hará que la expresión sea verdadera y se ejecute lo que está dentro del cuerpo del if, es decir, entre las llaves. En este caso se le asignará el mensaje al la variable string msj.

Pa comprender esta expresión es conveniente analizar su tabla de verdad.

```bash
    (1)       (2)            (3)
+---------+---------+-------------------+
| a < 0   | a > 100 | (a < 0 || a > 100)|
+---------+---------+-------------------+
| false   | false   | false             |
| false   | true    | true              |
| true    | false   | true              |
| true    | true    | true              |
+---------+---------+-------------------+
```

Esta tabla de verdad analiza todos los casos posibles de forma abstractas. Tiene sentido en las tres primeras filas para nuestro caso. Si bien hay situaciones en las cuales puede darse, no es este el caso porque es imposible que un número sea al mismo tiempo menor que cero y mayor que 100.

Veamos un análisis para casos particulares.

```bash
+-------+---------+---------+-----------+
| a     | a < 0   | a > 100 | Resultado |
+-------+---------+---------+-----------+
| -5    | true    | false   | true      |
| 0     | false   | false   | false     |
| 50    | false   | false   | false     |
| 100   | false   | false   | false     |
| 150   | false   | true    | true      |
+-------+---------+---------+-----------+
```

Ten en cuenta que este análisis es sólo para este caso. Podemos cambiar la lógica y hacerlo así:

```cpp
...
if(a>=0 && a <=100){
    // Cuerpo en caso de ingresar datos validos
} else {
    msj="El dato ingresado está fuera del rango!";
}
```
