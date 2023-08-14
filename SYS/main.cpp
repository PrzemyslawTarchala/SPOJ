#include <iostream>
#include <stdlib.h>

using namespace std;

void przeksztalcNaHex(int liczba, char wynikk){
    char wynik[10];
    atol(itoa(liczba, wynik, 16));
    cout << wynik << " ";
}

void przeksztalcNaJedenastkowy(int liczba){
    char wynik[10];
    atol(itoa(liczba, wynik, 11));
    cout << wynik << endl;
}

int main()
{
    char *wynikk = new (char);
    *wynikk = 10;
    cout << wynikk;
    int liczbaPrzypadkow, liczbaDoKonwersji;
    cin >> liczbaPrzypadkow;

    for (int i = 0; i < liczbaPrzypadkow; ++i){
        cin >> liczbaDoKonwersji;
        przeksztalcNaHex(liczbaDoKonwersji, wynikk);
        przeksztalcNaJedenastkowy(liczbaDoKonwersji);
    }
    return 0;
}


