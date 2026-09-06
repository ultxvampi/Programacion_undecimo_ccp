#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
using namespace std;

class EstacionMeteorologica {
 private:
    string nombre;
    vector<double> lecturas;

 public:

    // Constructor por defecto
    EstacionMeteorologica() {
        this->nombre = "Estacion sin nombre";
    }

    // Constructor parametrizado
    EstacionMeteorologica(string nombre) {
        this->nombre = nombre;
    }

    bool registrarLectura(double temperatura) {
        if (temperatura >= -50.0 && temperatura <= 60.0) {
            lecturas.push_back(temperatura);
            return true;
        } else {
            return false;
        }
    }

    double promedio() {
        if (lecturas.empty()) {
            return 0.0;
        } else {
            double suma = accumulate(lecturas.begin(), lecturas.end(), 0.0);
            return suma / lecturas.size();
        }
    }

    double maxima() {
        if (lecturas.empty()) {
            return 0.0;
        }
        return *max_element(lecturas.begin(), lecturas.end());
    }

    string getNombreEstacion() {
        return nombre;
    }

    int getCantidadLecturas() {
        return lecturas.size();
    }
};

int main() {
    string nombreEstacion;
    getline(cin, nombreEstacion);

    EstacionMeteorologica estacion(nombreEstacion);

    int M;
    cin >> M;
    cin.ignore();

    for (int i = 0; i < M; i++) {
        string opcion;
        cin >> opcion;

        if (opcion == "registrar") {
            double temp;
            cin >> temp;
            if (estacion.registrarLectura(temp)) {
                cout << "Lectura registrada: " << temp << endl;
            } else {
                cout << "Error: la temperatura debe estar entre -50 y 60." << endl;
            }
        }

        if (opcion == "promedio") {
            if (estacion.getCantidadLecturas() == 0) {
                cout << "Sin lecturas registradas." << endl;
            } else {
                cout << "Promedio: " << estacion.promedio() << endl;
            }
        }

        if (opcion == "maxima") {
            if (estacion.getCantidadLecturas() == 0) {
                cout << "Sin lecturas registradas." << endl;
            } else {
                cout << "Maxima: " << estacion.maxima() << endl;
            }
        }

        if (opcion == "cantidad") {
            cout << estacion.getNombreEstacion() << " - lecturas registradas: " 
                 << estacion.getCantidadLecturas() << endl;
        }
    }

    return 0;
}