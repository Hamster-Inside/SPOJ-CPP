// FZI_STEF.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    int cities;
    int plusNumber = 0;
    int highestNum = 0;
    int sum = 0;
    int* money;
    cin >> cities;
    money = new int[cities];
    for (int i = 0; i < cities; i++) {
        cin >> money[i];
        if (money[i] > 0) {
            highestNum = money[i];
            plusNumber++;
        }
    }
    if (plusNumber > 1) {
        for (int i = 0; i < cities; i++) {
            sum += money[i];
            if (sum < 0 && i != cities - 1) {
                sum = 0;
            }
            else if (sum < 0 && i == cities - 1) break;
            if (highestNum < sum) highestNum = sum;
        }
        cout << highestNum;
    }
    else if (plusNumber == 1)  cout << highestNum;
    else cout << "0";
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
