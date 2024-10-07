#include <iostream>
#include <conio.h>

using namespace std;

const int N = 1;

void test()
{
    for(int i = 33; i < 127; i++)
    {
        cout << i << " - " << static_cast<char>(i) << endl;
    }
}

int main()
{
    cout << "Tak czy nie? (t/n)\n";
    char komenda;
    do
    {
        komenda = _getch();
        komenda = toupper(komenda);
    } while (komenda != 'T' && komenda != 'N');
    if (komenda == 'T')
    {
        cout << "TAK\n";
        test();
    }
    else
        cout << "NIE\n";
    return 0;
}
