#### Actividad 4b

Modifique el programa **cambiosMoney** , guárdelo con nombre **cambiosMoney-v1**  e introdusca los dos escenarios posible de cambio de monedas. 

- Primer escenario. El usuario quiere comprar dolares: En ese caso se utiliza el **tipo de cambio vendedor**.

- Segundo escenario: El usuario quiere vender dolares: En ese caso se utiliza el **tipo de cambio comprador**.

El programa debe exponer un menú donde el usuario elije el escenario a utilizar. Debe quedar algo parecido a esto:

```bash
...
// Encabezado
...

Elija una opción:

   1.- Cambiar pesos por dolares.
   2.- Cambiar dolares por pesos.
...
```

En este caso el usuario elejirá una de las dos opciones, es decir 1 o 2. Esos valores se utilizará para determinar que porción de código se ejecutará. 

```cpp
if(condicion) {
   // bloque de codigo si condicion en true.
} else {
   // bloque de código si condicion es false.
}
```

No olvide chequear el tipo de cambio en la siguiente página: [Banco de la Nación Argentina](https://bna.com.ar/Personas#divisas)










