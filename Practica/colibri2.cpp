#include <bits/stdtr1c++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a, b, c;
    long long dp_a, dp_b, dp_c;
    cin >> a >> b >> c;

    for (int i = 0; i < n-1; i++)
    {
        cin >> a >> b >> c;

     long long nuevo_a, nuevo_b, nuevo_c;

     nuevo_a = a + max(dp_b, dp_c);
     nuevo_b = b + max(dp_a, dp_c);
     nuevo_c = c + max(dp_b, dp_a);

     dp_a = nuevo_a;
     dp_b = nuevo_b;
     dp_c = nuevo_c;
    }
    cout << max({dp_a, dp_b, dp_c});

    return 0;
}