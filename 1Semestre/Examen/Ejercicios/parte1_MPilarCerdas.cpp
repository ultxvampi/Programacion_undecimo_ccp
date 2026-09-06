#include <iostream>
using namespace std;

/// Planta Hidroeléctica
// Menú de control con las 5 funciones y una sexta de salida
int N[max_turb]; // N es el número de turbinas
// Turbinas es la cantidad que produce la turbina
const int max_turb = 10; // solo puden haber hasta 10 turbinas
int turbinas;
// Capacidad máx permitida por la turbina
int capacidad_max;

// Suma lo q produce la turbina y el mw para verificar que no se pase del máx
void aumentar(int turbinas[], int mw, int capacidad_max, int N){
    for(int N = 0; 1 =< N =< 10; N++){
      if(turbinas[i] + mw > capacidad_max){
        cout << "Limite excedido... :c" << endl;
        return 0;
      } else{
        return turbinas[i] + mw;
          }
    }
}

// le quita lo que produce la turbina a mw y si es negativo dice que está apagada, si no igual se resta
void reducir(int turbinas[], int mw, int N){
   for(int N = 0; 1 =< N =< 10; N++){
      if(turbinas[i] - mw < 0){
        turbinas[i] = 0
        cout << "Turbina"<< int N << "Apagada" << endl;
        return 0;
      } else{
        return turbinas[i] -= mw;
          }
    }  

}


// Consulta lo q está generando la turbina numero N
void consultar(int turbinas[], int N){
    cout << "Turbina" << N +1 << turbinas[i] << "MW" << endl;
}

// Dice el total que están generando todas las turbinas, recorriemdo todas las turbinas y sumandolas
void total(int turbinas[]){ 
    int suma = 0;
    for(int i = 0; i < N; i++){
       suma += turbinas[i];
     cout << "Generacion total:" << suma << "MW"<< endl;
    }
}

//  Lee todas las turbinas y dice la turbina que más genera, si hay empate dice la de menor N
void mayor_aporte(int turbinas[], int N){
 int o = 0;
  for (int i = 1; i < N; i++){
    if(turbinas[i] > turbinas[o]){
        o = i;

    }
  }
  cout << "Mayor aporte:Turbina" << o + 1 << turbinas[o] << "MW" << endl;
}

// menú para ejecutar las 5 funciones si el usuario lo quiere o salir (6)
// 1 aumentar, 2 reducir, 3 consultar, 4 total, 5 mayor aporte, 6 salir
// pide opcion y turbina, se repite hasta salir
void main(){
cout << "Sistema de Control" << endl;
cout << "Num de turbinas (minimo 1 y maximo 10):";
cin >> N;
cout << "Capacidad maxima por turbina?";
cin >> capacidad_max;


int opcion, o, mw;
cout <<"\nMenú: \n1.Aumentar \n2.Reducir \n3.Consultar \n4.Total \n5.Mayor aporte \n6.Salir \nOpcion:";
cin >> opcion;


switch(opcion){
    case 1:
    cout << "Turbina:";
    cin >> o;
    cout << "Aumentar cuando MW:";
    cin >> mw;
    aumentar(int turbinas[], int mw, int capacidad_max, int N);
    break;

    case 2:
    cout << "Turbina:";
    cin >> o;
    cout << "Reducir cuanto MW:";
    cin >> mw;
    reducir(int turbinas[], int mw, int N);
    break;

    case 3:
    cout << "Turbina:";
    cin >> o;
    consultar(int turbinas[], int N);
    break;

    case 4:
    total(turbinas[]);
    break;

    case 5:
    mayor_aporte(int turbinas[], int N);
    break;

    case 6:
    cout << "Chaop" << endl;
    break;
} if (opcion != 6){
    cout << "Invalidoooo" << endl;
    return 0;
}
}



// Estoy en una crisis muy fuerte porq todo me genera error pero no me da
// el maní para saber por queeeeeeeeeeeeeeeeeeeeeeeeeeeee q ganas de llorar, una disculpa
// por tdo profe :,cc
