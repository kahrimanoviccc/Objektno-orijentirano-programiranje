#include <iostream>
#include <vector>
#include <string>

using namespace std;

void unos(vector <string>& rijeci){
string rijec;
cout << "Unesi rijec: " << endl;
while(cin >> rijec){
rijeci.push_back(rijec);
};
}

string ispisi_listu(const vector <string>& rijeci){
int broj_karaktera=0;
string najduza;
for(string element : rijeci){
cout << element << "\t" ;
broj_karaktera+= element.size();
if (element.size()>najduza.size()){
najduza = element;
};
};
cout << "\nUkupan broj karaktera: " << broj_karaktera << endl;
return najduza;
}

void ispisi_najduzu(string a){
int duzina= a.size();
string PrviZadnji= "++++" + string(duzina, '+');
string DrugiPredzadnji= "+ " + string(duzina, ' ') + " +";
string glavni = "+ " + a + " +";
cout << "Najduza rijec: " << endl << PrviZadnji << endl << DrugiPredzadnji << endl << glavni << endl << DrugiPredzadnji << endl << PrviZadnji << endl;
}

int main()
{
vector <string> rijeci;
unos(rijeci);
string najduza= ispisi_listu(rijeci);
ispisi_najduzu(najduza);
}
