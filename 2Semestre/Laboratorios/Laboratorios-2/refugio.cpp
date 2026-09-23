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

class Perro : publi Mascota {
private:
     string raza;
public: 
     Perro(string nombre, int edad, string raza)
     : Mascota(nombre, edad) {
        this-> raza = raza;
     }
     void mostrar(){
        Mascota::mostrar
     }
}