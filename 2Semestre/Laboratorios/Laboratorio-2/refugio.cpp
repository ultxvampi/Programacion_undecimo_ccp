#include <iostream>
#include <string>
using namespace std;

class Mascota {
protected:
     string nombre;
     int edad;

public:
     Mascotas(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
     }

     void mostrar(){
        cout << nombre << " " << edad << " " ;
     }
};

class Perro : public Mascota {
private:
     string raza;
public: 
     Perro(string nombre, int edad, string raza)
     : Mascota(nombre, edad) {
        this->raza = raza;
     }
     void mostrar(){
        Mascota::mostrar();
        cout << raza << '\n';
     }
};

class Gato : public Mascota {
private:
     int interior;
public: 
     Gato(string nombre, int edad, int interior)
     : Mascota(nombre, edad) {
        this->interior = interior;
     }
     void mostrar(){
        Mascota::mostrar();
       if (interior == 1){
         cout << interior << '\n';

       }
       else if (interior == 0){
         cout << "no es de interior" << '\n';
       }
     }
};

int main(){
   int N;
   cin >> N;

   for (int i = 0; i < N; i++){
      string tipo;
      cin >> tipo;

      if (tipo == "perro"){
         string nombre, raza;
         int edad;
         cin >> nombre >> edad >> raza;
         Perro pe(nombre, edad, raza);
         pe.mostrar();
      } 
      else if (tipo == "gato"){
         string nombre;
         int edad, interior;
         cin >> nombre >> edad >> interior;
         Gato ga(nombre, edad, interior);
         ga.mostrar();
      }
   } 

   return 0;
}