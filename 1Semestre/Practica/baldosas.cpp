#include <bits/stdc++.h>
using namespace std;

int main() {
  
  // Lectura
  long long a, b, p, q;
  cin >> a >> b >> p >> q;

  // Procesamiento
  long long lado = (a*q) / (b*p);

  // Imprimir
  cout << lado * lado << endl;
  
  return 0;
}