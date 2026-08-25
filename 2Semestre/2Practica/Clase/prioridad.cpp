#include <iostream>
#include <queue>
#include <tuple>
#include <string>
using namespace std;

int main() {
    int m;
    cin >> m;

    priority_queue<tuple<int, int, string>> fila;   
    int orden = 0;

    for (int i = 0; i < m; i++) {
        string comando;
        cin >> comando;

        if (comando == "llega") {
            string nombre;
            int prioridad;
            cin >> nombre >> prioridad;
            fila.push({prioridad, -orden, nombre});
            orden++;
        } else if (comando == "atender") {
            if (fila.empty()) {
                cout << "Fila vacia\n";
            } else {
                auto atendido = fila.top();
                fila.pop();
                cout << "Atendido: " << get<2>(atendido)
                     << " (prioridad " << get<0>(atendido) << ")\n";   
            }
        }
    }
    return 0;
}