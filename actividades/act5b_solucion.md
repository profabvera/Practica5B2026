# Actividad 5b - Solución con while

```cpp
#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Spanish");
    int i=1;
    while(i<=100){
        if(i%7==0) {
            cout << i << " - Es múltiplo de 7" << endl;
        }
        cout << i << endl;
        i++; // incrementa i en una unidad
    }
    return 0;
}    
```
