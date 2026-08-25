#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    const int N = 6;
    vector<int> notas(N);

    // Leer las N notas
    cout << "Ingrese las " << N << " notas: ";
    for (int i = 0; i < N; i++) {
        cin >> notas[i];
    }

    // Ordenar de menor a mayor
    sort(notas.begin(), notas.end());

    // Mostrar notas ordenadas
    cout << "Notas ordenadas: ";
    for (int nota : notas) {
        cout << nota << " ";
    }
    cout << endl;

    // Buscar una nota específica
    int notaBuscada;
    cout << "Ingrese la nota a buscar: ";
    cin >> notaBuscada;

    auto it = find(notas.begin(), notas.end(), notaBuscada);
    if (it != notas.end()) {
        cout << "La nota " << notaBuscada << " fue encontrada." << endl;
    } else {
        cout << "La nota " << notaBuscada << " no está en la lista." << endl;
    }

    // Reportar nota máxima y mínima
    cout << "Nota mínima: " << *min_element(notas.begin(), notas.end()) << endl;
    cout << "Nota máxima: " << *max_element(notas.begin(), notas.end()) << endl;

    return 0;
}
