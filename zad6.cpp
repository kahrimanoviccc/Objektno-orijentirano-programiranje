#include <iostream> 
#include <math.h>
using namespace std;

void sabiranje(double a, double b){
cout << a << " + " << b << " = " << endl;
double suma= a+b;
cout << suma << endl;
}

void oduzimanje(double a, double b){
cout << a << " - " << b << " = " << endl;
double razlika= a-b;
cout << razlika << endl;
}

void mnozenje(double a, double b){
cout << a << " * " << b << " = " << endl;
double proizvod= a*b;
cout << proizvod << endl;
}

void dijeljenje(double a, double b){
cout << a << " / " << b << " = " << endl;
if (b==0) {
cout << "Dijeljenje s nulom nije moguce!" << endl; 
};
double kolicnik= a/b;
cout << kolicnik << endl;
}

void ostatak(int a, int b){
cout << a << " % " << b << " = " << endl;
int ostatak= a%b;
cout << ostatak << endl;
}

void stepenovanje(double a, double b){
cout << a << " ^ " << b << " = " << endl;
double stepen= pow(a, b);
cout << stepen << endl;
}


char unos_operacija(double& prvi, double& drugi){
cout << "***\t Dobrodosli u kalkulator \t*** \n" << endl; 
cout << "Molimo odaberite operaciju: " << endl;
cout << " +\n -\n *\n /\n %\n ^" << endl;
char karakter;
cin >> karakter;
cout <<"Molimo unesite prvi broj: " << endl;
cin >> prvi;
cout << "Molimo unesite drugi broj: " << endl;
cin >> drugi;
if (cin.fail()){
throw runtime_error{"Neispravan unos!"};
};
return karakter;
}

void izbor(const char& c, const double& prvi_br, const double& drugi_br){
if (c == '+'){
sabiranje(prvi_br,drugi_br);
}else if(c == '-'){
oduzimanje(prvi_br, drugi_br);
}else if(c == '*'){
mnozenje(prvi_br,drugi_br);
}else if(c == '/'){
dijeljenje(prvi_br,drugi_br);
}else if(c == '%'){
ostatak(prvi_br,drugi_br);
}else if(c == '^'){
stepenovanje(prvi_br,drugi_br);
}else{
cout << "Nepostojeca operacija!" << endl;
};
}



int main()
{
double a=0,b=0;
char operacija;
try{
operacija= unos_operacija(a,b);
}catch (const runtime_error& a) {
cout << a.what() << endl;
};
izbor(operacija, a, b);
}
