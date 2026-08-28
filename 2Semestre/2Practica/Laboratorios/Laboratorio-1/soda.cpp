#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

const int N = 5;

int main() {
    vector<pair<int, string>> pedidos;   
    queue<string> fila;          

    for (int i = 0; i < N; i++) {
        string nombre;
        int monto;
        cin >> nombre >> monto;
        pedidos.push_back({monto, nombre});
        fila.push(nombre);
    }
    sort(pedidos.begin(), pedidos.end());
    cout << "Pedidos ordenados por monto:\n";
    for (const auto& p : pedidos) {
        cout << p.second << ": " << p.first << "\n";
    }
    
    auto it = max_element(pedidos.begin(), pedidos.end());
    cout << "Pedido mayor: " << it->second << " (" << it->first << ")\n";

    string buscar;
    cin >> buscar;
    bool encontrado = false;
    for (const auto& pe : pedidos) {
        if (pe.second == buscar) {
            cout << buscar << " pidio por " << pe.first << " colones\n";
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << buscar << " no hizo pedido\n";
    }
    stack<string> historial;
    for (int i = 0; i < N; i++) {
        string nombre = fila.front();
        fila.pop();
        cout << "Atendido: " << nombre << "\n";
        historial.push(nombre);
    }
    
    string comando;
    cin >> comando;
    if (comando == "Deshacer") {
        if (!historial.empty()) {
            string ultimo = historial.top();
            historial.pop();
            fila.push(ultimo);
            cout << ultimo << " vuelve a la fila\n";
        } else {
            cout << "No hay pedidos\n";
        }
    }  
    return 0;
}