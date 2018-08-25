#include <iostream>

using namespace std;

int sprawdzeniePin();
void wyswietlMenu();

int main()
{
    sprawdzeniePin();
    wyswietlMenu();

    int opcja;
    cin >> opcja;

        if (opcja == 1) {
            cout << "Podaj kwote " << endl;
        }

    return 0;
}

int sprawdzeniePin() {
    cout << "Witaj w naszym banku!" << endl;
    cout << "======================" << endl;

    int pin = 1234;
    int kod;

    do {
        cout << "Podaj numer PIN: ";
        cin >> kod;

        if(pin != kod) {
           cout << "Kod PIN niepoprawny" << endl;
           cout << endl;
        }
    } while (pin != kod);

    cout << "Poprawny PIN" << endl;
};

void wyswietlMenu() {
    cout << "Wybierz rodzaj dzialania: " << endl;
    cout << "1. Wyplac gotowke" << endl;
    cout << "2. Sprawdz stan konta" << endl;
    cout << "3. Zmien PIN" << endl;
    cout << "Wybor: " << endl;
};
