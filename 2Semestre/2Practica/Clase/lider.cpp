#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int m;
    cin >> m;

    map<string, int> conteos;
    string lider = "";
    int liderConteo = 0;

    for (int i = 0; i < m; i++) {
        string comando;
        cin >> comando;

        if (comando == "buscar") {
            string palabra;
            cin >> palabra;
            conteos[palabra]++;   
            if (conteos[palabra] > liderConteo) {   
                liderConteo = conteos[palabra];
                lider = palabra;
            }
        } else if (comando == "top") {
            if (liderConteo == 0) {
                cout << "Sin datos\n";
            } else {
                cout << lider << ": " << liderConteo << '\n';
            }
        }
    }
    return 0;
}