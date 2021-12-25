#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>
using namespace std;

static bool isInsideAnotherCircle(double l, int r1, int r2) {
    if (r1 >= r2) return l + r2 <= r1;
    else return l + r1 <= r2;
}
int main()
{
    int x1, y1, r1, x2, y2, r2, tests;
    double result, l, a, b, d1, d2;
    cin >> tests;
    for (int i = 0; i < tests; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        a = x1 - x2;
        b = y1 - y2;
        l = sqrt(pow(a, 2) + pow(b, 2));
        result = r1 + r2 - l;
        d1 = r1 * 2;
        d2 = r2 * 2;
        if (isInsideAnotherCircle(l, r1, r2)) {
            if (r1 > r2) printf("%.2f\n",d2);
            else printf("%.2f\n", d1);
        }
        else if (l > (r1 + r2)) cout <<  "0.00";
        else printf("%.2f\n", result);
       
    }
    return 0;
}




