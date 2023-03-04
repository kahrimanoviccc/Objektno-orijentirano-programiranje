#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void provjeri_trougao(){
vector <int> trougao;
int duzina=0;
cout << "Dobrodosli u program za provjeru pravouglog trougla.\nMolimo unesite duzine stranica a, b, c. " << endl;
while (cin >> duzina){
trougao.push_back(duzina);
if(trougao.size() == 3){
break;
};
}
if(trougao.size() < 3){
cout << " Niste unijeli sve stranice!" << endl;
}else{
sort(begin(trougao), end(trougao));
int zbir_kateta = pow(trougao.at(0), 2) + pow(trougao.at(1), 2);
int hipotenuza= pow(trougao.at(2), 2);
if(zbir_kateta == hipotenuza){
cout << "Trougao je pravougli" << endl;
cout << "( " << trougao.at(0) << ", " << trougao.at(1) << ", " << trougao.at(2) << " )" << endl;
}else{
cout << "Trougao nije pravougli" << endl;
}
}
}

void provjeri_stranicu(int najduza){
for(;najduza>0; najduza--){
for(int i=1; i < najduza; i++){
for(int j=1; j < najduza; j++){
int zbir_kateta= pow(j,2) + pow(i,2);
int hipotenuza= pow(najduza,2);
if (i > j){
if (zbir_kateta == hipotenuza){
cout << "( " << j << ", " << i << ", " << najduza << " )" << endl;
};
};
};
};
};
}

int main() {
int cijeli_broj=0;  
provjeri_trougao();
cout << "Unesite cijeli broj: " << endl;
cin >> cijeli_broj;
provjeri_stranicu(cijeli_broj);
 }
