#include <iostream>
using namespace std;

void aumentar(int turbinas[], int i, int mw, int capacidad_max){
    if (turbinas[i-1] + mw > capacidad_max)
    cout << "Limite excedido" << endl;
    else
    turbinas[i-1] = turbinas[i-1] + mw;
}

void reducir(int turbinas[], int i, int mw){
    if(turbinas[i-1] - mw < 0){
    turbinas[i-1] = 0;
    cout << "Turbina" << i << "apagada" << endl;
    } else 
      turbinas[i-1] -= mw;
}

void consultar(int turbinas[], int i){
    cout << "Turbinas" << i << ":" << "MW";
}

int total(int turbinas[], int N){
    int generacion_total = 0;

    for(int i = 0; i < N; i++){
        generacion_total += turbinas[i];

    }
    return generacion_total;
}

void mayor_aporte(int turbinas[], int N){
    int mayor = turbinas[0];
    int pos_mayor = 0
    for(int i = 0; i < N; i++){
        if (mayor < turbinas[i]){
            mayor = turbinas[i];
            pos_mayor = i + 1;
        }
    } 
    cout << "Mayor aporte -- Turbina" << pos_mayor << ":" << mayor << "MW" << endl;

}



int main(){
cout << "N: ";
cin >> N;
cout << "Capacidad máxima (MW):";
cin >> capacidad_max;

bool continuar = true
while(continuar){
 cout << "" << endl;
 cout << "" << endl;
 cout << "" << endl;
 cout << "" << endl;
 cout << "" << endl;
 
}

    return 0;
}