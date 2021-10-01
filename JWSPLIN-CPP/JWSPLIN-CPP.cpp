// JWSPLIN-CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int tests;
    double x[3];
    double y[3];
    double a1, a2, b1, b2;
    cin >> tests;
    for (int i = 0; i < tests; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> x[j];
            cin >> y[j];
        }
        if (x[0] == 0 && x[1] == 0 && x[2] == 0 && y[0] == 0 && y[1] == 0 && y[2] == 0) {
            cout << "TAK\n";

        }
        else if (x[0] == x[1] && x[1] == x[2]) cout << "TAK\n";
        else if (y[0] == y[1] && y[1] == y[2]) cout << "TAK\n";
        else {
            a1 = ((y[0] - y[1]) / (x[0] - x[1]));
            b1 = y[0] - x[0] * a1;
            a2 = ((y[1] - y[2]) / (x[1] - x[2]));
            b2 = y[1] - x[1] * a1;
            if (a1 == a2 && b1 == b2) cout << "TAK\n";
            else cout << "NIE\n";
        }

    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
