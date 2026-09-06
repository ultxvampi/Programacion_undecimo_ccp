///Entradas de cineeee
#include <iostream>
using namespace std;
int main(){
int edad;
int dia;
///Precios
int precio_me= 2500;
int precio_ma = 2000;
int precio_a = 4000;
/// Recargos de fin de semana
int recargo_me = precio_me/5;
int recargo_ma = precio_ma/5;
int recargo_a = precio_a/5;
//Pido la edad de la persona q viene al cine, tambien el dia (caso 1 o 2)
cout << "Espectador, ingrese su edad:" << endl;
cin >> edad;
cout << "Ingrese si estamos fin (2) o entre semana (1):" << endl;
cin >> dia;
switch (dia) {
    case 1: //entre semana
     if(edad <= 12){
      cout << "Categoria: Niño" << endl;
      cout << "Precio base:" << precio_me << endl;
      cout << "Recargo: 0" << endl;
      cout << "Total:" << precio_me << endl;
     }
     if(edad > 12 && edad < 64){
      cout << "Categoria: Adulto" << endl;
      cout << "Precio base:" << precio_a << endl;
      cout << "Recargo: 0" << endl;
      cout << "Total:" << precio_a << endl;
     }
     if(edad >= 65){
      cout << "Categoria: Adulto mayor" << endl;
      cout << "Precio base:" << precio_ma << endl;
      cout << "Recargo: 0" << endl;
      cout << "Total:" << precio_ma << endl;
     }
        break;
    case 2: // fin de semana
     if(edad <= 12){
      cout << "Categoria: Niño"<< endl;
      cout << "Precio base:" << precio_me << endl;
      cout << "Recargo:"<< recargo_me<< endl;
      cout << "Total:" << precio_me + recargo_me << endl;
     }
     if(edad > 12 && edad < 64){
      cout << "Categoria: Adulto";
      cout << "Precio base:" << precio_a << endl;
      cout << "Recargo:"<< recargo_a << endl;
      cout << "Total:" << precio_a + recargo_a << endl;
     }
     if(edad >= 65){
      cout << "Categoria: Adulto mayor" << endl;
      cout << "Precio base:" << precio_ma << endl;
      cout << "Recargo:"<< recargo_ma << endl;
      cout << "Total:" << precio_ma + recargo_ma << endl;
     } 
        break;
    default:
     cout << "Error..." << endl;
}
}
/// yaiiiiisisirveeeeee:D