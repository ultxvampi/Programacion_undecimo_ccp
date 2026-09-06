#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class EstacionMeteorologica {
 private:
    string nombre;
    vector<double> lecturas;

 public:
 
    EstacionMeteorologica(){
        this->nombre "Estación sin nombre" 
    }
    EstacionMeteorologica(){
        this->nombre = nombre;
    }
    
    bool regustrartemperatura(double temperatura){
        if(temperatura >= -50 && temperatura <= 60){
            lecturas.push_back(temperatura);
            return true;
        } else return false;

    }


}