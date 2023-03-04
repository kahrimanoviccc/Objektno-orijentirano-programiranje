#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void unos(vector <string>& rijec){
string unesena_rijec;
cout << "Unesi rijec: ";
while(cin >> unesena_rijec){
rijec.push_back(unesena_rijec);  
cout << "Unesi rijec: " << endl;
};
}

int obrada(vector <string>& rijec1){
int duzina=0;
sort (begin(rijec1), end(rijec1));
for(string element : rijec1){
if(element.size() > duzina){
duzina= element.size();
};
};
return duzina;
}

void ispis(int najduza, const vector <string> sortiran){
string prviZadnji = "++" + string(najduza, '+') + "++";
string drugiPredzadnji = "+ " + string(najduza, ' ') + " +";
cout << prviZadnji << endl << drugiPredzadnji << endl;
for(string elemenat : sortiran){
string ispisi = "+ " + elemenat + string((najduza-elemenat.size()), ' ') + " +";
cout << ispisi << endl;
};
cout << drugiPredzadnji << endl << prviZadnji << endl;


}

int main(){
vector <string> rijeci;
unos(rijeci);
int najduza = obrada(rijeci);
ispis(najduza,rijeci);
}
