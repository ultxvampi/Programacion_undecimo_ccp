#include <iostream>
using namespace std;

void agregar(int vagones[], int p, int v){

 for(int i = 0; i < p; i++){
    vagones[i] += v; // Sumar desde 1 al p
 }

}

int consultar(int vagones[], int p){
 return vagones[p-1];
}


int main(){
  // Recibir N- Tamaño vagon
  // y Q-Cantidad de operaciones
    int N, Q;
    cin >> N >> Q;
 // Iniciar vagones en 0
    int vagones[100];
    for (int i; i < N; i++){
        vagones[i] = 0;
    }
 // Procesar operaciones
 for(int i = 0; i < Q; i++){
   char operacion;
   cin >> operacion;

   if(operacion == "A"){
    int p;
    int v;
    cin >> p >> v;

    agregar(vagones, p, v);
    //procesar dos entradas: p y v
   } else if (operacion == "C"){
    int p;
    cin >> p;
    cout << consultar(vagones, p) << endl;

   }
 }
    return 0;
}