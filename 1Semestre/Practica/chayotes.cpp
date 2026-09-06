#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n, k;
    cin >> n >> k;

    cout << int(ceil(n/k) * k) << endl;

    return 0;
}