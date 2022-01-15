#include <iostream>
using namespace std;

static int power_modulo_fast(int a, int b, int m) {
    int i;
    int result = 1;
    long x = a % m;

    for (i = 1; i <= b; i <<= 1) {
        x %= m;
        if ((b & i) != 0) {
            result *= x;
            result %= m;
        }
        x *= x;
    }

    return result;
}
int main()
{
    int u, s, d, result;
    
    while (true) {
        cin >> u;
        cin >> s;
        cin >> d;
        if (u == 0 && s == 0 && d == 0) break;
        
        cout << power_modulo_fast(u, s, d) << "\n";
    }
    return 0;
}




