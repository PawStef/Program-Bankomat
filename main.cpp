#include <iostream>

using namespace std;

int main()
{
    cout << "Witaj w naszym banku!" << endl;


    int pin = 1234;
    int kod;

    do {
        cout << "Podaj numer PIN: ";
        cin >> kod;

        if(pin != kod) {
           cout << "Kod PIN niepoprawny" << endl;
        }
    } while (pin != kod);

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

    return 0;
}
