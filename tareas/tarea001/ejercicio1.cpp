#include <iostream>
using namespace std; 
int main(){
/// declaro la constante de gravedad y los "valores" para poner t y y (tiempo y altura de la ventana)
 const double gravedad = 9.8; 
 double t, y;
 cout << "Ingrese el tiempo:"; ///pido el valor de t y y 
 cin >> t; 
 cout << "Ingrese la altura de la ventana:";
 cin >> y; 
 ///Mensaje de error
 if ( t <= 0){
 cout << "El tiempo no puede ser negativo";
 }
 if ( y <= 0){
 cout << "La altura de la ventana no debe ser negativa";
 };
 if ( h <= 0){
 cout << " los valores de t y y implican que h es <= 0 y esto no es posible...";
 };
 /// Calculo la velocidad (v) con ecuaciones de movimiento rectilineo uniforme acelerado ;b
 double v = (y/t) - (gravedad*t/2);
 /// Calculo altura (h) desde ecuaciones de caída libreeeee
 double h = (v*v)/(2*gravedad);
 cout << "La altura desde la que se lanzo fue de: " << h << " metros";
 }