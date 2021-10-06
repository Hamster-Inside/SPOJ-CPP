// MWPZ06H-CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int partition(int vec[], int lt, int rt) {
    int pivot = vec[rt]; // pivot
    int i = (lt - 1);
    for (int j = lt; j <= rt - 1; j++) {
        if (vec[j] < pivot) {
            i++; swap(vec[i], vec[j]);
        }
    }
    swap(vec[i + 1], vec[rt]);
    return (i + 1);
}
void QuickSort(int table[], int lt, int rt) {
    if (lt < rt) {
        /* mid is partitioning index, vec[p] is now
        at right place */
        int mid = partition(table, lt, rt);
        // Separately sort elements before
        // partition and after partition
        QuickSort(table, lt, mid - 1);
        QuickSort(table, mid + 1, rt);
    }
}

int main()
{
    int d; // liczba zestawow danych 1-500
    int n; // liczba calkowita 1-200 - liczba uczestnikow konkursu
    int highestNumber = 0;
   
    // posortowaæ najpierw max potem od najmniejszej. Np IN: 3 5 1 5 3 2 5 -> OUT: 5 5 5 1 2 3 3

    cin >> d;
    

    for (int i = 0; i < d; i++) {
        cin >> n;
        int* table;
        table = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> table[j];
        }

        QuickSort(table, 0, n - 1);
        highestNumber = table[n - 1];

        for (int j = 0; j<n; j++) {
            if (table[j] == highestNumber) cout << highestNumber << " ";

        }
       
        for (int j = 0; j < n; j++) {

            if (table[j] == highestNumber) break;
            cout << table[j] << " ";

        }
      
        highestNumber = 0;
        delete(table);
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
