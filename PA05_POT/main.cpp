#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int liczbaPrzypadkow;
    int podstawa, potega;
    long long int wynik;
    const int MIANOWNIK = 10;

    cin >> liczbaPrzypadkow;

    for (int i = 0; i < liczbaPrzypadkow; ++i){
        cin >> podstawa >> potega;
        wynik = pow(podstawa, potega);
        cout << wynik % MIANOWNIK << endl;
    }
    return 0;
}
