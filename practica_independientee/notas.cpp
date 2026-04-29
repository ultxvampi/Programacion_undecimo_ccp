/// Calcular notas promedio de un grupo :v
#include <iostream>
using namespace std;

float calcular_prom(int notas[], int cantidad ){
 int suma = 0;
 for(int i = 0; cantidad < i; i++){
    suma += notas[i];
 }
 return (float)suma/cantidad;
}

int main(){
    int notas[7];
    cout << "Ingrese las notas (7):" << endl;
    for(int i = 0; i < 7;i++){
      cout << "Nota:" << i+1 << endl;
        cin >> notas[i];
    }
   float promed = calcular_prom(notas,7);
   cout << "\nPromedio final: " << promed << endl;
   if (promed >= 70){
    cout << "Aprobado" << endl;
   } else {
    cout << "Reprobado,k tonto" << endl;
   }
   return 0;
}