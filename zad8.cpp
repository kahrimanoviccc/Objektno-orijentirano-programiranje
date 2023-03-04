#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

auto VeciManji = [](int a,int b){
return a>b;
};

auto ParniPrvo = [](int a, int b){
return ((a%2) == 0);
};

void sortiraj(vector <int>& svi){
sort(begin(svi),end(svi));
}

void sortiraj_veci(vector <int>& svi){
sort(begin(svi),end(svi), VeciManji);
}

void sortiraj_parni(vector <int>& svi){
sort(begin(svi),end(svi), ParniPrvo);
}


void ispis(const vector<int>& svi){
for(const int& broj : svi){
cout << broj << endl;
};
}

void loto(int broj_kuglica, int za_izvlacenje){
vector <int> svi_izvuceni;
int izvuceni_broj;  
srand(time(NULL));
for(int i=0; i<za_izvlacenje; i++){
izvuceni_broj= rand() % broj_kuglica;
svi_izvuceni.push_back(izvuceni_broj);
};
cout << "Izvuceno\n" << string(10, '-') << endl;
ispis(svi_izvuceni);
sortiraj(svi_izvuceni);
cout << "Sortirano\n" << string(10, '-') << endl;
ispis(svi_izvuceni);
sortiraj_veci(svi_izvuceni);
cout << "Sortirano VeciManji:" << endl;
ispis(svi_izvuceni);
cout << "Sortirano ParniPrvo: " << endl;
sortiraj_parni(svi_izvuceni);
ispis(svi_izvuceni);
}

int main()
{
int broj_kuglica, za_izvlacenje;
cout << "Unesite ukupan broj kuglica: " << endl;
cin >> broj_kuglica;
cout << "Unesite broj kuglica za izvlacenje" << endl;
cin >> za_izvlacenje;
if(cin){
cout << "Ukupan broj kuglica: " << broj_kuglica << "\nBroj kuglica za izvlacenje: " << za_izvlacenje << endl;
}else{
cout << "Unos neuspjesan!" << endl;
};
loto(broj_kuglica,za_izvlacenje);

}
