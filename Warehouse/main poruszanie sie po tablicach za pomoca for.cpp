#include <iostream>

using namespace std;
// masz tabelke w excelu i wykonaj zadnaia
int main()
{
   double magazyn[5][5]=
   {
       {1, 3.58, 5, 10, 2},
       {2, 9.61, 5, 25, 5},
       {3, 8.52, 8, 18, 3},
       {4, 10.25, 8, 36, 6},
       {5, 6.17, 23, 4, 1}

   };
    int licznik;
    double cena_brutto, wartosc = 0;

    for(licznik=0; licznik<=4; licznik++)
    {
        cena_brutto = magazyn[licznik][1] + (magazyn[licznik][2] / 100 *magazyn[licznik][1]);
        wartosc = wartosc + (cena_brutto * magazyn[licznik][3] * magazyn[licznik][4]);
        cout << "Towar ID : " << magazyn[licznik][0] << " cena brutto : " << cena_brutto << " zl" <<endl;

        cout << "Towar ID : " << magazyn[licznik][0] << endl;
        cout << "Cena netto : " << magazyn[licznik][1] << endl;
        cout << "Cena brutto : " << cena_brutto << endl;
        cout << "Stawka VAT : " << magazyn[licznik][2] << "%" << endl;
        cout << "Cena za pudelko : " << magazyn[licznik][3] * cena_brutto << " z³" << endl;
        cout << "----------------------------------" << endl;
    }

    cout << "\n wartosc magazynu : " << wartosc << "zl" << endl;

    return 0;
}
