# Actividad 5f

En esta actividad le agregamos un ciclo al menú realizado en la actividad 4f cuyo enunciado era el siguiente:

---

Escribe un programa que muestre el siguiente menú al usuario. Cuando el usuario selecciona una de las opciones, el programa debe mostrar un mensaje como **Seleccionó Listas** en el caso que el usuario haya ingresado el valor 4.

```bashag-0-1k0f6gadeag-1-1k0f6gade
    === Menu === 
    ------------
    1.- Altas 
    2.- Bajas 
    3.- Modificaciones 
    4.- Listas 
    5.- Salir 

        Elija una opción: 
```

```bash
    === Menu === 
    -------------
    1.- Altas 
    2.- Bajas 
    3.- Modificaciones 
    4.- Listas 
    5.- Salir 

        Elija una opción: 4

        Seleccionó Listas
```

En este caso se pretende que el alumno utilice la sentencia de selección múltiple **switch**.

---

En este tipo de menú resulta muy útil el uso del ciclo do-while porque necesariamene queremos mostrar por lo menos una vez el menú.

```cpp
#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

int main() {
   setlocale(LC_ALL,"Spanish");
   int opc=0;
   do {
        system("clear");
        cout << "\n\t=== Menu === " << endl;
        cout << "\t-------------" << endl;
        cout << "\t1.- Altas " << endl;
        cout << "\t2.- Bajas " << endl;
        cout << "\t3.- Modificaciones " << endl;
        cout << "\t4.- Listas " << endl;
        cout << "\t5.- Salir " << endl;
        cout << "\n\t\tElija una opción: ";
        cin >> opc;

         switch(opc){
              case 1:
                    cout << "\n\t\tAltas - Enter regresa al menú" << endl;
                    std::cin.ignore();
                    std::cin.get();
                    break;
              case 2:
                    cout << "\n\t\tBajas - Enter regresa al menú" << endl;
                    std::cin.ignore();
                    std::cin.get();
                    break;
              case 3:
                    cout << "\n\t\tMoficicaciones - Enter regresa al menú" << endl;
                    std::cin.ignore();
                    std::cin.get();
                    break;
              case 4:
                    cout << "\n\t\tListas - Enter regresa al menú" << endl;
                    std::cin.ignore();
                    std::cin.get();
                    break;
              case 5:
                    cout << "\n\t\tSeleccionó Salir" << endl;
                    std::cin.ignore();
                    std::cin.get();
                    break;
              default:
                    cout << "\n\t\tIncorrecto! - Fuera de Rango" << endl;
                    cout << "\t\tEnter regresa al menú" << endl;
                    std::cin.ignore();
                    std::cin.get();
         }
     } while(opc != 5);
    return 0;
}
```

En este caso hemos realizado algunas mejoras como el limpiado de la pantalla con el `system("clear");`, clear es una instrucción de línea de comando del sistema operativo que podemos acceder con la herramienta `system` de la librería estándar de C `cstdlib`.

Las otras mejoras al código son las dos intrucciones `std::cin.ignore();` y `std::cin.get()` que nos permiten hacer una pausa y esperar que el usuario presione enter para continuar. Es de mucha ayuda para analizar el funcionamiento del código, en casos reales el programa ejecutará otro bloque de código y probablemente no hará falta. 
