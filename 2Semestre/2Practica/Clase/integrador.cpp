#include <iostream>  
#include <vector> 
#include <algorithm>
/// TERMINAAAAAAAAAAAAAAAAAAAARRRRR
// Leer grupo de notas, ordenarlas, buscar si una está 
//y reportar la máxima y la mínima
int main(){

 const int N = 6

 vector<int> notas(N);
 cout << "Notas:"
   for (int i = 0; i < N; i++){
    cin >> notas;
    notas.push_back(nota);
 }

 sort(notas.begin(), notas.end())
 
 int busca;
 cin >> busca;

 auto it = find(notas.begin(), notas.end(), busca);
  if (it != notas.end())
  {
    cout << "La buscada" <<   }

}
