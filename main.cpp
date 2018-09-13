#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

int sprawdzeniePin();
void wyswietlMenu();
int wyborOpcji();

int main()
{
    sprawdzeniePin();
    wyswietlMenu();
    wyborOpcji();

    return 0;
}

int sprawdzeniePin() {
    cout << "Witaj w naszym banku!" << endl;
    cout << "======================" << endl;

    int pin = 1234;
    int kod;
    int proba = 1;

    do {
        cout << "Podaj numer PIN: ";
        cin >> kod;

        if(pin != kod) {
        cout << "Kod PIN niepoprawny" << endl;
        proba++;
            if (proba > 3) {
                cout << "Zbyt wiele prob" << endl;
                exit(0);
            }
        }
    } while (pin != kod);

    cout << "Poprawny PIN" << endl;
};


void wyswietlMenu() {
    cout << "Wybierz rodzaj dzialania: " << endl;
    cout << "1. Wyplac gotowke" << endl;
    cout << "2. Sprawdz stan konta" << endl;
    cout << "3. Zmien PIN" << endl;
    cout << "4. Rezygnacja" << endl;
    cout << "Wybor: " << endl;
};

int wyborOpcji() {
    int opcja, wyplata, stan;
    int limit = 4000;
    cin >> opcja;

    switch (opcja) {
    case 1:
        cout << "Podaj kwote: " << endl;
        cin >> wyplata;
        if (wyplata > limit)
        {
            cout << "Podana kwota jest wyzsza niz " << limit << endl;
        }
        else
        {
            cout << "Zlecono wyplate " << wyplata << " PLN" << endl;
        }
    break;
    case 2:
        srand(time(NULL));
        stan = rand()%100000;
        cout << "Stan konta: " << stan << endl;
    break;
    case 3:
        cout << "Podaj nowy PIN: " << endl;
    break;
    case 4:
        exit(0);
    break;
    default: cout<< "Wybierz wlasciwa opcje ";
    }

};
