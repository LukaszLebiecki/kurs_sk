#include <iostream>

using namespace std;

int main()
{
    char operacja;
    int a, b;

    cout << "Menu" << endl;
    cout << "1 - dodawanie" << endl;
    cout << "2 - odejmowanie" << endl;
    cout << "3 - mnozenie" << endl;
    cout << "4 - dzielenie" << endl;
    cout << "5 - modulo" << endl;
    cout << "" << endl;

    cin >> operacja;

    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    switch (operacja)
    {
    case '1':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '2':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '3':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '4':
        cout << a << " / " << b << " = " << a / b << endl;
        break;
    case '5':
        cout << a << " % " << b << " = " << a % b << endl;
        break;
    default :
        cout << "error..." << endl;
    }

}