#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Podaj liczbe calkowita: ";
    cin >> number;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(99999, '\n');
        cout << "Wpisales zle dane, wpisz jeszcze raz: ";
        cin >> number;
    }
    cout << "Wpisales liczbe " << number << endl;

    return 0;
}
