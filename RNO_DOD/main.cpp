#include <iostream>

using namespace std;

void wprowadzLiczbyDoTablicy(int *tablica, int rozmiarTablicy){
    int suma = 0;

    for (int i = 0; i < rozmiarTablicy; ++i){
        cin >> *tablica;
        suma += *tablica;
        ++tablica;
    }
    cout << suma << endl;
}

int main()
{
    int liczbaPrzypadkow, rozmiarTablicy, kolejnaLiczbaWTablicy;
    int wynik;

    cin >> liczbaPrzypadkow;

    do{
        cin >> rozmiarTablicy;
        int *tablica = new int[rozmiarTablicy];
        wprowadzLiczbyDoTablicy(tablica, rozmiarTablicy);
        delete [] tablica;
    }while(-- liczbaPrzypadkow);

    return 0;
}
