```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 //  float dolarTipoComp;
   float dolarTipoVend;
   float montoPeso; 
   float montoDolar;
   cout << "=================" << endl;
   cout <<" Cambios Money" << endl;
   cout <<" Convierte pesos " << endl;
   cout << " a dólar "<< endl;
   cout << "=================" << endl;

   dolarTipoVend = 1420;

   cout << "\nIngrese el monto en AR:";
   cin >> montoPeso;
   montoDolar = montoPeso / dolarTipoVend ;
   cout << "\t" << montoPeso <<" AR " <<
       std::fixed << setprecision(2) <<
       montoDolar << " USD" << endl;
       return 0;
 }      
```
