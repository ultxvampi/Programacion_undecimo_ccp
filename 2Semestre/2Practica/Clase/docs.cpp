#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int m;
    cin >> m;

    stack<string> historial;   
    stack<string> rehacer;

    for (int i = 0; i < m; i++) {
        string comando;
        cin >> comando;

        if (comando == "escribir") {
            string texto;
            cin >> texto;
            historial.push(texto);
            while (!rehacer.empty()) {   
                rehacer.pop();
            }
        } else if (comando == "deshacer") {
            if (!historial.empty()) {
                rehacer.push(historial.top());
                historial.pop();
            }
        } else if (comando == "rehacer") {
            if (!rehacer.empty()) {
                historial.push(rehacer.top());
                rehacer.pop();
            }
        }
    }

    stack<string> invertida;   
    while (!historial.empty()) {
        invertida.push(historial.top());
        historial.pop();
    }
cout << "Documento final:\n";
    while (!invertida.empty()) {
        cout << invertida.top() << '\n';
        invertida.pop();
    }
    return 0;
}