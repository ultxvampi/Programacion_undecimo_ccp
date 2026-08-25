#include <iostream>
#include <queue>
#include <stack>
#include <string>
using namespace std;

const int N = 5;

int main() {
    queue<string> turnoRegular;
    priority_queue<pair<int, string>> turnoUrgente;   

    for (int i = 0; i < N; i++) {
        string nombre;
        int urgencia;
        cin >> nombre >> urgencia;

        if (urgencia > 0) {
            turnoUrgente.push({urgencia, nombre});
        } else {
            turnoRegular.push(nombre);
        }
    }

    stack<string> historial;

    while (!turnoUrgente.empty()) {
        string nombre = turnoUrgente.top().second;   
        turnoUrgente.pop();
        cout << "Atendido (urgente): " << nombre << '\n';
        historial.push(nombre);
    }

    while (!turnoRegular.empty()) {   
        string nombre = turnoRegular.front();
        turnoRegular.pop();
        cout << "Atendido (regular): " << nombre << '\n';
        historial.push(nombre);
    }
 while (!historial.empty()) {   
        cout << historial.top() << '\n';
        historial.pop();
    }
    return 0;
}