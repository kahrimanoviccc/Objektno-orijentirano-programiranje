#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

namespace Temperatura{
const double CuF =1.8;
const double constK = 273.15;
const double FuK = 459.67;
const double constF = 5.0/9.0;
}

namespace Brzina{
const double Km_u_M= 0.621371192;
const double M_u_Km= 1.60934;
}

namespace Duzina{
const long double ly= 9460730777119.56;
const double ft= 0.3048;
const double inch= 2.54;
}

namespace Masa{
const double lbs= 2.20462262185;
}

namespace Potrosnja_goriva{
const double mpg= 235.21;
}

//Meni

int pocetni_meni(void){
cout << "Dobrodosli u konverter jedinica. Molimo izaberite jednu od opcija(1-5): " << endl;
cout << "1. Temperatura\n2. Brzina\n3. Duzina\n4. Masa\n5. Potrosnja goriva" << endl;
unsigned int izbor=0;
cin >> izbor;
if ((izbor<=0) || (izbor>5)){
cout << "Unijeli ste pogresnu opciju. Molimo unesite jednu od navedenih opcija." << endl;
exit(10);
};
cout << "Vas izbor: " << izbor << endl;
return izbor;
}

// Temperatura

void konverter_temperature(void){
cout << "Molimo izaberite zeljenu konverziju: \n1. Celzijus u Farenhajt\n2. Celzijus u Kelvin\n3. Kelvin u Celzijus\n4. Kelvin u Farenhajt\n5. Farenhajt u Celzijus\n6. Farenhajt u Kelvin"<<endl;
int izbor=0;
cin >> izbor;
if ((izbor<=0) || (izbor>6)){
cout << "Unijeli ste pogresnu opciju. Molimo unesite jednu od navedenih opcija." << endl;
exit(10);
}else if(izbor == 1){
cout << "Vas izbor: " << izbor << endl;
double tempC=0,tempF=0;
cout << "Unesite temperaturu u Celzijusevima" << endl;
cin >> tempC;
if(tempC < -273.15){
cout << "Temperatura ispod -273.15 Celzija ne postoji!" << endl;
exit(10);
};
tempF= tempC * Temperatura::CuF + 32.0;
cout << "Vasa unesena temperatura u Celzijevima= " << tempC << " jednaka je temperaturi: " << tempF << " u Farenhajtima" << endl;
}else if(izbor == 2){
cout << "Vas izbor: " << izbor << endl;
double tempC=0,tempK=0;
cout << "Unesite temperaturu u Celzijusevima" << endl;
cin >> tempC;
if(tempC < -273.15){
cout << "Temperatura ispod -273.15 Celzija ne postoji!" << endl;
exit(10);
};
tempK= tempC + Temperatura::constK ;
cout << "Vasa unesena temperatura u Celzijevima= " << tempC << " jednaka je temperaturi: " << tempK << " u Kelvinima" << endl;
}else if(izbor == 3){
cout << "Vas izbor: " << izbor << endl;
double tempK=0;
double tempC=0;
cout << "Unesite temperaturu u Kelvinima: " << endl;
cin >> tempK;
if (tempK < 0.0){ 
cout << "Temperatura u Kelvinima ne moze biti negativna!" << endl;
exit(10);
}
tempC= tempK-Temperatura::constK;
cout << "Unesena temperatura Kelvinima= " << tempK << " jednaka je temperaturi: " << tempC << " u Celzijevima" << endl;
}else if(izbor == 4) {
cout << "Vas izbor: " << izbor << endl;
double tempK=0, tempF=0;
cout << "Unesite temperaturu u Kelvinima" << endl;
cin >> tempK;
if(tempK<0){
cout << "Temperatura u Kelvinima ne moze biti negativna!" << endl;
exit(10);
};
tempF = (tempK - Temperatura::constK) * Temperatura::CuF + 32.0; 
cout << "Unesena temperatura u Kelvinima= " << tempK << " jednaka je temperaturi " << tempF << " u Farenhajtima" << endl;
}else if(izbor == 5){
cout << "Vas izbor: " << izbor << endl;
double tempF=0,tempC=0;
cout << "Unesite temperaturu u Farenhajtima" << endl;
cin >> tempF;
tempC= (tempF - 32 ) / Temperatura::CuF;
if(tempC < -273.15){
cout << "Unijeli ste nerealnu vrijednost, temperatura ispod -273.15 Celzija ne postoji!" << endl;
exit(10);
};
cout << " Unesena temperatura u Farenhajtima= " << tempF << " jednaka je temperaturi: " << tempC << " u Celzijevima" << endl;
}else if(izbor == 6){
cout << "Vas izbor: " << izbor << endl;
double tempF=0, tempK=0;
cout << "Unesite temperaturu u Farenhajtima" << endl;
cin >> tempF;
tempK = (tempF + Temperatura::FuK) * Temperatura::constF;
if(tempK < 0){
cout << "Unijeli ste nerealnu vrijednost, negativna temperatura u Kelvinima ne postoji!" << endl;
exit(10);
}
cout << "Vasa unesena temperatura u Farenhajtima= " << tempF << " jednaka je temperaturi: " << tempK << " u Kelvinima" << endl;
};
}

// Brzina

void konverter_brzine(void){
cout << "Molimo izaberite zeljenu opciju: " << endl;
cout << "1. Kilometri po satu u Milje po satu\n2. Milje po satu u Kilometre po satu" << endl;
double Kmh=0, Mph=0;
int izbor=0;
cin >> izbor;
if (((izbor !=1 ) && (izbor != 2 ))){
cout << "Pogresan unos, molimo izaberite ponudjene opcije!" << endl;
exit(10);
}else if(izbor == 1){
cout << "Unesite brzinu u Kmh: " << endl;
cin >> Kmh;
Mph = Kmh * Brzina::Km_u_M;
cout << "Brzina koju ste unijeli u Kmh= " << Kmh << " jednaka je brzini: " << Mph << " u Mph." << endl;
}else if(izbor == 2 ){
cout << "Unesite brzinu u Mph: " << endl;
cin >> Mph;
Kmh= Mph * Brzina::M_u_Km;
cout << "Brzina koju ste unijeli u Mph= " << Mph << " jednaka je brzini: " << Kmh << " u Kmh." << endl;
};
}

//Duzina

void konverter_duzine(void){
cout << "Molimo izaberite zeljenu opciju: " << endl;
cout << "1. Svjetlosne godine u kilometre\n2. Stope u metre\n3. Inchi u cm" << endl;
int izbor=0;
cin >> izbor;
if (((izbor < 1 ) || (izbor > 3 ))){
cout << "Pogresan unos, molimo izaberite ponudjene opcije!" << endl;
exit(10);
}else if(izbor == 1){
double svjetlosne_godine=0;
long double kilometri=0;
cout << "Unesite broj svjetlosnih godina: " << endl;
cin >> svjetlosne_godine;
kilometri = svjetlosne_godine * Duzina::ly;
cout << "Duzina koju ste unijeli u svjetlosnim godinama= " << svjetlosne_godine << " jednaka je duzini: " << kilometri << " u km." << endl;
}else if(izbor == 2 ){
double stopa=0,metar=0;
cout << "Unesite broj stopa : " << endl;
cin >> stopa;
metar= stopa * Duzina::ft;
cout << "Duzina koju ste unijeli u stopama= " << stopa << " jednaka je duzini: " << metar << " u m." << endl;
}else if(izbor == 3){
double inch=0,centimetar=0;
cout << "Unesite broj incha : " << endl;
cin >> inch;
centimetar= inch * Duzina::inch;
cout << "Duzina koju ste unijeli u inch= " << inch << " jednaka je duzini: " << centimetar << " u cm." << endl;
};
}

// Masa

void konverter_mase(void){
double kilogram=0,funta=0;
cout << "Unesite masu u kilogramima : " << endl;
cin >> kilogram;
funta= kilogram * Masa::lbs;
cout << "Masa koju ste unijeli u kilogramima= " << kilogram << " jednaka je masi: " << funta << " u funtama." << endl;
}

// Potrosnja goriva

void konverter_goriva(){
double litar_po_km=0,milja_po_galonu=0;
cout << "Unesite potrosnju u l na 100km: " << endl;
cin >> litar_po_km;
milja_po_galonu= Potrosnja_goriva::mpg/litar_po_km;
cout << "Potrosnja koju ste unijeli u l/100km= " << litar_po_km << " jednaka je potrosnji: " << milja_po_galonu << " u miljama po galonu." << endl;
}


int main (){
int izbor=0;
izbor=pocetni_meni();
if (izbor == 1){
konverter_temperature();
}else if(izbor == 2){
konverter_brzine();
}else if(izbor == 3){
konverter_duzine();
}else if(izbor == 4){
konverter_mase();
}else if(izbor == 5){
konverter_goriva();
};
}
