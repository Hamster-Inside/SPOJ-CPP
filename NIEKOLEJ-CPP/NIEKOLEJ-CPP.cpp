// NIEKOLEJ-CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    // incoming data: 2 ->  out: NIE (nie mog¹ byæ dwie liczby obok siebie)
    // incoming data: 4 -> out: 1 4 2 0 3
    // incoming data: 11 -> out: 1 11 2 10 3 9 4 8 5 7 0 6
    // incoming data: 10 -> out: 1 10 2 9 3 8 4 7 5 0 6
    cin >> n;
   
    for (int i = 1; i <= n; i++) {
        if (n == 0) {
            cout << n;
            break;
        }
        if (n == 2 || n == 1) {
            cout << "NIE";
            break;
        }
        if (i == n / 2 && n % 2 == 0) {
            cout << i << " 0 " << (i + 1);

            break;
        }
        if (i == n / 2 && n % 2 != 0) {
            cout << i << " " << (i + 2) << " 0 " << (i + 1);
            break;
        }
        cout << i << " " << (n + 1 - i) << " ";


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
