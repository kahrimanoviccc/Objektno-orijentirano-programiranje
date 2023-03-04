#include <string>
#include <iostream>
using namespace std;

void unos(string& prvi, string& drugi){
cout << "Unesite dvije rijeci sa istim brojem slova: " << endl;
cin >> prvi;
cin >> drugi;
if (cin.fail()){
cout << "Neuspjesan unos, molimo pokusajte ponovo" << endl; 
};
}

void konvertuj_slovo(string& prvi,string& drugi ){
for(int i=0;i <prvi.size();i++)
if( (prvi.at(i) >= 'A') && (prvi.at(i) <= 'Z')){
prvi.at(i) += 32;}; 
}

void provjeri_konvertuj(string& prvi, string& drugi){
if(prvi.size()==drugi.size()){
konvertuj_slovo(prvi,drugi);
};
}

int racunaj_udaljenost(const string& prvi, const string& drugi){
int udaljenost=0;
for(int i=0; i< prvi.size(); i++){
if(prvi.at(i) != drugi.at(i)){
udaljenost++;
};
};
return udaljenost;
}

int main() {  
string prva,druga;  
unos(prva,druga);
provjeri_konvertuj(prva,druga);
auto udaljenost = racunaj_udaljenost(prva,druga);
cout << "Hammingova udaljenost je: " << udaljenost << endl;
}
