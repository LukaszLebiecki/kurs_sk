#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const short N = 6;

bool czy_juz_jest(short liczba, short tab[], short n)
{
    for (short i = 0; i < n; i++)
    {
        if(tab[i] == liczba)
            return true;
        return false;
    }
}

void wypelnij_tablice(short tab[])
{
    short liczba;
    for (short i = 0; i < N; i++) 
    {
        do
        {
            liczba = 1 + rand() % 49;
        } while (czy_juz_jest(liczba, tab, i));
        tab[i] = liczba;
        
    }
}

void wyswietl_tablice(short tab[])
{
    for (short i =0; i < N; i++)
    {
        cout << tab[i] << " ";
        
    }
    cout << endl;
}

void sortuj(short tab[])
{
    for (short i = 0; i < N - 1; i++)
    {
        for(short j = 0; j < N - i - 1; j++)
        {
            if(tab[j] > tab[j+1])
            {
                swap(tab[j], tab[j+1]);
            }
        }
    }
}

void pobierz_liczby(short tab[])
{
    short liczba;
    for(short i = 0; i < N; i++)
    {
        cin >> liczba;
        while (liczba < 1 || liczba > 49 || czy_juz_jest(liczba, tab, i))
        {
            cout << "Zle dane, Wypisz jeszcze raz:";
            cin >> liczba;
        }
        tab[i] = liczba;
    }
}

short wynik(short tab1[], short tab2[])
{
    short licznik = 0;
    for(short i = 0; i < N; i++)
    {
        if(czy_juz_jest(tab1[i], tab2, N))
        {
            licznik++;
        }
    }
    return licznik;
}

int main()
{
    srand(time(nullptr));
    short tablica[N], typy[N];
    cout << "Podaj 6 liczb:" << endl;
    pobierz_liczby(typy);
    wypelnij_tablice(tablica);
    sortuj(tablica);
    sortuj(typy);
    cout << "Wylosowane liczby: " << endl;
    wyswietl_tablice(tablica);
    cout << "Twoje liczby: " << endl;
    wyswietl_tablice(typy);
    cout << "Trafiles " << wynik(tablica, typy) << " liczb!" << endl;
    
    return 0;
}