// Faça um programa que exiba na tela a tabuada do número 5 no seguinte formato: 5X1=5; 
// 5X2=10; 5X3=15; ... ; 5X10=50. 

#include <iostream>
using namespace std;

int main () {
    
    int contador = 1;
    
    while (contador <= 10) {
        int conta = 5 * contador;
        cout << "5 x " << contador << " = " << conta << endl;
        contador++;
    }
    
    return 0;
}
