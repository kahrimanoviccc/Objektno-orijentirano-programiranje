#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void obrada_broja(int uneseni_broj){
vector <int> pohrani_cifre;
int cifra=0;
int suma=0;
int proizvod=1;
while(uneseni_broj){
cifra= uneseni_broj%10;
pohrani_cifre.push_back(cifra);
suma+= cifra;
proizvod*= cifra;
uneseni_broj = uneseni_broj/10;
};
for(const int& broj : pohrani_cifre){
cout << broj;
};
sort (begin(pohrani_cifre), end(pohrani_cifre));
int najveca= pohrani_cifre.at((pohrani_cifre.size())-1);
int najmanja= pohrani_cifre.at(0);
cout << "\n" << najmanja << "\n" << najveca << "\n" << suma << "\n" << proizvod << endl; 
}

int main() {
int cijeli_broj;
cout << "Molimo unesite cijeli broj: " << endl;
cin >> cijeli_broj;
obrada_broja(cijeli_broj);
}
