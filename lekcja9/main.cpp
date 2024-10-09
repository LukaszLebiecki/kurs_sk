#include <iostream>

using namespace std;

enum class stan_gry
{
    otwarta,
    wygrana,
    przegrana,
    remis
};

int main()
{
    stan_gry stan = stan_gry::otwarta;
    cout << static_cast<int>(stan) << endl;

    return 0;
}