#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int obliczWspolrzednaXDlaSrodkaOgniska(int *tab, int liczbaKopcow){

    int wspolrzednaXDlaOgniska;
    sort(tab, tab + liczbaKopcow);

    wspolrzednaXDlaOgniska = (tab[0]/2)+(tab[liczbaKopcow - 1]/2);
    return wspolrzednaXDlaOgniska;
}

int obliczDroge(int **tab, int iloscKopcow, int srodekOgniskaNaOsiX){
    int dlugoscDrogiPoY = 0;
    int dlugoscDrogiPoX = 0;

    for (int i = 0; i < iloscKopcow; ++i){
        dlugoscDrogiPoY += abs(tab[1][i]);
    }

    for (int i = 0; i < iloscKopcow; ++i){
        dlugoscDrogiPoX += abs(srodekOgniskaNaOsiX - (tab[0][i]));
    }
    return dlugoscDrogiPoX + dlugoscDrogiPoY;
}

int main()
{
    int liczbaKopcow, srodekOgniskaNaOsiX, calkowitaDroga;
    int **tab = new int *[2];
    cin >> liczbaKopcow;

    tab[0] = new int [liczbaKopcow];
    tab[1] = new int [liczbaKopcow];

    for (int i = 0; i < liczbaKopcow; ++i){
        cin >> tab[0][i];
        cin >> tab[1][i];
    }

    srodekOgniskaNaOsiX = obliczWspolrzednaXDlaSrodkaOgniska(tab[0], liczbaKopcow);
    calkowitaDroga = obliczDroge(tab, liczbaKopcow, srodekOgniskaNaOsiX);

    cout << srodekOgniskaNaOsiX << " " << calkowitaDroga;

    delete [] tab;
    return 0;
}
