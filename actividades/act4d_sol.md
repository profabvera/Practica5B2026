#### Actividad 4d - Solución

---

```cpp
#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Spanish");
    string calif="";
    string msg="";        
    float a;

/// Agregue aquí

    cout << "Ingrese el puntaje obtenido: ";
    cin >> a;

    if(a>90 && a <= 100) {
        calif="Sobresaliente";
    } else if(a>80 && a <= 90) {
        calif="Distinguida";
    } else if(a>70 && a <= 80) {
        calif="Buena";
    } else if(a>=60 && a <= 70) {
        calif="En proceso";
    } else if(a > 1 && a < 60) {
        calif="Insuficiente!";
    } else {
        msg="Valor fuera del rango de calificación! ";
    }

    if(calif!="") {
        cout << "El alumno obtuvo una calificación " << calif << endl;
    } else {
        cout << "Error:" << msg << endl;
    }

    return 0;
}
```

Hay una instrucción en C++ que suele ser más apropiada cuando la selección es múltiple como esta, es la instrucción **switch**


