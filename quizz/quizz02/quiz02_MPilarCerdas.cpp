#include <iostream>
#include <string>
using namespace std;
/// Vagones del tren:b

void Vagon(int vagones[], int numVagones){
  for (int i = 0; i <= numVagones; i++){
    vagones[i] = 0; // los vagones inician en 0
  }
}
void carga(int vagones[], int r, int v){
  for(int i=1; 1 <= r; i++){
    vagones[i] += v; // agregarle la carga al vagón
  }
}
void operaciones(int vagones[], int numVagones){
  int numOperaciones;
  cin >> numOperaciones;
    string operacion;
    cout << "C o A, solo mayusculas" << endl;
    cin >> operacion;
    if (operacion == "A"){ //Si la operacion es A da la carga de los vagones
      int v,r;
      cout << "Ingrese los valores " << endl;
      cin >> v >> r;
      carga(vagones,v,r);  
     }
     if(operacion == "C"){ //Si la operacion es C
      int r;
      cin >> r;
      cout << vagones[r] << endl;
     }

}
void consultar(int vagones[], int r){
    cout << vagones[r] << endl; // deberia de decir los vagones con su carga
}
int main(){
  int numVagones;
  cin >> numVagones;
  int vagones[numVagones + 1];
  Vagon(vagones, numVagones);
  operaciones(vagones, numVagones);
  consultar(vagones, numVagones);
  return 0;
}
//sospecho q no lo entendí bien y no da lo que debería pero
//mil disculpassssssssssssssssss :"((, porq lo meto en la terminal y me deja ponervalores
// pero nada q ver con lo q debería de ser (creop)