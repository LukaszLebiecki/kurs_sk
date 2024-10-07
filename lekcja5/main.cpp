#include <iostream>

using namespace std;

int number()
{
    int number;
    cout << "Podaj liczbe ";
    cin >> number;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(99999, '\n');
        cout << "Podales zle dane, podaj liczbe: ";
        cin >> number;
    }
    return number;
}

bool checkNumber(int num) 
{
    if (num < 2)
        return false;
    for(int i = 2; i <= num-1; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() 
{
    cout << checkNumber(number());

    return 0;
}