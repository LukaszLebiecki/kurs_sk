#include <iostream>
#include <ctime>

using namespace std;

int losuj(int a, int b) 
{
    if (b < a)
    {
        swap(a, b);
    }
    return a + rand() % (b - a + 1);
}

int main()
{
    srand(time(nullptr));
    cout << losuj(1, 6);
    return 0;
}