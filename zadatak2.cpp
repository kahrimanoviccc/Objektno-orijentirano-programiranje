#include <bitset>
#include <iostream>
#include <math.h>
// Poziv funkcije printBits rezultovace sa ispisom
// proslijedjenog broja u binarnoj formi.
//
// Primjer:
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// unsigned short s = 5;
// printBits(s);
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Ispis:
// 0000000000000101
// 
void printBits(std::bitset<16>& ok) {
  std::cout << ok << std::endl;
}

void nova_vrijednost(std::bitset<16>& ok) {
  unsigned short nova=0;
  for(int i=0; i<16; i++){
  nova+= pow(2, i) * ok[i];
  };  
  std::cout << "New register value: " << nova << std::endl; 
}

void setBits(std::bitset<16>& ok){
std::cout << "Enter bit number: " << std::endl;
short brBita=0;
std::cin >> brBita;
ok[brBita] = 1;
nova_vrijednost(ok);
printBits(ok);
}

void resetBits(std::bitset<16>& ok){
std::cout << "Enter bit number: " << std::endl;
short brBita=0;
std::cin >> brBita;
ok[brBita] = 0;
nova_vrijednost(ok);
printBits(ok);
}


int main() {
izbor:std::cout << "Izaberite registar: \n1. Prvi\n2. Drugi\n3. Zamijeni" << std::endl;
  int reg=0;
  std::cin >> reg;
  int option=0;
   std::bitset<16> biti1;
  std::bitset<16> biti2;
  if(reg == 1){ 
  while(option !=4){
   std::cout << "Enter option: " << std::endl;
  std::cout << "1. Print register" << std::endl;
  std::cout << "2. Set bit in register" << std::endl;
  std::cout << "3. Reset bit in register" << std::endl;
  std::cout << "4. Exit" << std::endl;
    std::cin >> option;
    if (option == 1) {
      printBits(biti1);
     continue;
    } else if (option == 2) {
     setBits(biti1);
     continue;
    } else if (option == 3) {
     resetBits(biti1);
     continue;
    } else if (option == 4) {
      goto izbor;
    };
};
}else if(reg==2){
  while(option !=4){
   std::cout << "Enter option: " << std::endl;
  std::cout << "1. Print register" << std::endl;
  std::cout << "2. Set bit in register" << std::endl;
  std::cout << "3. Reset bit in register" << std::endl;
  std::cout << "4. Exit" << std::endl;
    std::cin >> option;
    if (option == 1) {
      printBits(biti2);
     continue;
    } else if (option == 2) {
     setBits(biti2);
     continue;
    } else if (option == 3) {
     resetBits(biti2);
     continue;
    } else if (option == 4) {
      goto  izbor;
    };
};
}else if(reg == 3){
  std::bitset<16> pomocna;
  pomocna = biti1;
  biti1= biti2;
  biti2 = pomocna;
  printBits(biti1);
  printBits(biti2);
};  
}
  

