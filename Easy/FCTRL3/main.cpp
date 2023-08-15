#include <iostream>

using namespace std;

int obliczSilnie(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n*obliczSilnie(n-1);
    }
}

int main()
{
    int liczbaPrzypadkow;
    int rozpatrywanaLiczba;
    int wynik;

    cin >> liczbaPrzypadkow;

    for (int i = 0; i < liczbaPrzypadkow; ++i){
        cin >> rozpatrywanaLiczba;
        if(rozpatrywanaLiczba < 10){
            wynik = obliczSilnie(rozpatrywanaLiczba);
            cout << (wynik % 100) / 10 << " " << wynik % 10 << endl;
        }
        else{
            cout << "0 0" << endl;
        }
    }
    return 0;
}
