#include <iostream>

using namespace std;

int main()
{
    cout << "Witaj w naszym banku!" << endl;
    cout << "Podaj numer PIN: ";

    int PIN;
    cin >> PIN;

    if(PIN == 1234)
    {
        cout << "Poprawny PIN" << endl;
        cout << "Wybierz rodzaj dzialania: " << endl;
        cout << "1. Wyplac gotowke" << endl;
        cout << "2. Sprawdz stan konta" << endl;
        cout << "3. Zmien PIN" << endl;
        cout << "Wybor: " << endl;
        int opcja;
        cin >> opcja;

        if (opcja == 1) {
            cout << "Podaj kwote " << endl;
        }
    }
    else
    {
        cout << "Niepoprawny PIN" << endl;
    }

    return 0;
}
