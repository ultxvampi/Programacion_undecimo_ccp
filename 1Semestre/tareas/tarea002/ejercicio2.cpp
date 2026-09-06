#include <iostream>
#include <string>
using namespace std;

/// Verificar si los valores dan un triaángulo válido
bool  es_valido(int a, int b, int c){
if ((a + b > c) && (a + c > b) && (b + c > a)){
 cout << "Es valido :D" << endl;
} else {
    cout << "No es valido D:" << endl;
}
}

/// A ver que tipo de triángulo es según lo k midan los lados
string tipo_triangulo(int a, int b, int c){
if (a == b && b == c){
    cout << "Es un triangulo equilatero" << endl;
} else if (a == b || b == c || a == c){
    cout << "Es un triangulo isoceles" << endl;
} else{
    cout << "Es un triangulo escaleno" << endl;
}
}

/// Calcular el perimetro de los triángulos
int calcular_perimetro(int a, int b, int c){
   cout << "El perimetro es " << (a + b + c) << endl;
}

void describir_triangulo(int a, int b, int c){
    if ((a + b > c) && (a + c > b) && (b + c > a)){
        es_valido(a,b,c);
        tipo_triangulo(a,b,c);
        calcular_perimetro(a,b,c);
    } else{
        es_valido(a,b,c);
    }
}

/// Hacer q funcione con las funciones (laredundancia)
int main(){
    int a ,b ,c;
    cout << "Ingrese los datos del triangulo:" << endl;
    cin >> a >> b >> c;  
    describir_triangulo(a,b,c);
    return 0;
}