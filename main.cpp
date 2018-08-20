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
    }
    else
    {
        cout << "Niepoprawny PIN" << endl;
    }

    return 0;
}
