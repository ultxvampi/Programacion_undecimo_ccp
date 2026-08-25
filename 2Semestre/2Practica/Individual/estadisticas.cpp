#include <iostream>
#include <vector>
using namespace std;

pair<int, int> minMax(const vector<int>& datos);

int main() {
    const int N = 5;
    vector<int> datos;

    for (int i = 0; i < N; i++) {
        int valor;
        cin >> valor;
        datos.push_back(valor);
    }

    auto [minimo, maximo] = minMax(datos);   
    cout << "Minimo: " << minimo << '\n';
    cout << "Maximo: " << maximo << '\n';
    return 0;
}

pair<int, int> minMax(const vector<int>& datos) {
    int minimo = datos[0];
    int maximo = datos[0];
    for (int x : datos) {   
        if (x < minimo) minimo = x;
        if (x > maximo) maximo = x;
    }
    return {minimo, maximo};   
}