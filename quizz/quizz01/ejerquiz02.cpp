/// Factura de electricidad
#include <iostream>
using namespace std;
int main(){
int consumo_mensual;
int social;
cout << "Ingrese su consumo mensual(kWh):" << endl;
cin >> consumo_mensual;
cout << "Posee tarifa social? 1 para sí, 0 para no:" << endl;
cin >> social;
switch (social) {
    case 0: //nosocial
    //75
     if(consumo_mensual <= 200){
      cout << "Subtotal:" << 75 * consumo_mensual << endl;
      cout << "Descuento: 0" << endl;
      cout << "Total:" << 75 * consumo_mensual << endl;
     }
    //110
     if(consumo_mensual >= 201 && consumo_mensual < 400){
      cout << "Subtotal:" << 110 * consumo_mensual << endl;
      cout << "Descuento: 0" << endl;
      cout << "Total:"<< 110 * consumo_mensual << endl;
     }
    //160
     if(consumo_mensual >= 401){
      cout << "Subtotal:" << 160 * consumo_mensual << endl;
      cout << "Descuento: 0" << endl;
      cout << "Total:"<< 160 * consumo_mensual<< endl;
     }
        break;
    case 1: // social
     //75
     if(consumo_mensual <= 200){
      cout << "Subtotal:" << (75 * consumo_mensual) - consumo_mensual%40 << endl;
      cout << "Descuento:"<< consumo_mensual%40 << endl;
      cout << "Total:" << (75 * consumo_mensual) - consumo_mensual%40 <<endl;
     }
     //110
     if(consumo_mensual >= 201 && consumo_mensual < 400){
      cout << "Gasto mucho, sin descuento...." << endl;
     }
    //160
     if(consumo_mensual >= 401){
     cout << "Gasto mucho, sin descuento...." << endl;
     }
        break;
    default:
     cout << "Error..." << endl;
}
}
/// estoseguro se hace con for tmbn pero me cuestaaaa