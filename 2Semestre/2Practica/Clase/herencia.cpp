#include <iostream>
#include <string>
using namespace std;

class Producto {
protected:
    string nombre;
    double precio;
    int cantidad;

public:
    Producto(string nombre, double precio, int cantidad) {
        this->nombre = nombre;
        this->precio = precio;
        this->cantidad = cantidad;
    }

    void descripcion() {
        cout << nombre << " - " << precio << " colones";
    }
};

class ProductoPerecedero : public Producto {
private:
    int diasRestantes;

public:
    ProductoPerecedero(string nombre, double precio, int cantidad, int diasRestantes)
        : Producto(nombre, precio, cantidad) {
        this->diasRestantes = diasRestantes;
    }

    void descripcion() {
        Producto::descripcion();
        if (diasRestantes > 0) {
            cout << " (vence en " << diasRestantes << " dias)\n";
        } else {
            cout << " (vencido)\n";
        }
    }
};

int main() {
    Producto cuaderno("Cuaderno", 1500, 10);
    ProductoPerecedero yogurt("Yogurt", 600, 5, 0);

    cuaderno.descripcion();
    cout << '\n';
    yogurt.descripcion();

    return 0;
}