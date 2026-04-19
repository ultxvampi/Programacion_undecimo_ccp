///Función es_palindromo
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool es_palindromo(string palabra){
 int i = 0; // contador
 int n = palabra.length(); // largo de la palabra
 for (int i = 0; i < n/2; i++){ // revisa como las palabras en mitad
    if (tolower(palabra[i]) != tolower(palabra[n - 1 - i])){  // compararel final con el incio :b y lo pone en minuscula
        return false; // mitades son distintas
     }
   }
   return true; // las mitades son iguales
 }

int main(){
    string palabra;
    cout << "Ingrese la palabra" << endl;
    cin >> palabra;
  if (es_palindromo(palabra)){
    cout << "Es palindromo" << endl;
  } else{
    cout << "No es palindromo" << endl;
  }
  return 0;
}
