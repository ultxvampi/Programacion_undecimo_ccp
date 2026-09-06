#include <iostream>
using namespace std;
int main(){
   const double vs = 331.0;
   const double gc = 0.6;
   const double t = -273.15;
   double v, T ;
   cout << "Ingrese la velocidad (v) y la temperatura en kelvin (T, no debe ser mayor que -273.15):" << endl;
   cin >> v >> T;
   double j = (vs + gc) * T; /// vel.sonido
   double M = v/j; // número de Mach
  /// validaciones
 if(v <= 0){
         cout << "La velocidad debe ser mayor a 0" << endl;
   };
 if(T > t){
         cout << "La temperatura no es valida" << endl;
   }
  /// El rango de régimenes que hay, pppp
 if (M<0.8){
    cout << "Regimen: Subsonico" << endl;
   } else if(M >= 0.8 && M < 1.2){
    cout << "Regimen: Transonico" << endl;
   } else if(M >= 1.2 && M < 5.0){
    cout << "Regimen: Supersonico" << endl;
   } else if(M>=5.0){
    cout << "Regimen: Hipersonico" << endl;
   };

 cout << "Vel. sonido (vs):" << j << "m/s" << endl;
 cout << "Num. Mach:" << M << endl;
}