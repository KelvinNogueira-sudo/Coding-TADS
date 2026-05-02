#include <iostream>
using namespace std;

int main() {
    int i, j; //Variáveis fora de scopo
    for (i=1; i<10; i++) {  //Laço interno - Controla a tabuada de i
        cout << "------------------\n";
        cout << "Tabuada do : " << i << "\n";
        cout << "------------------\n";
        for (j=1; j<11; j++) {  //Laço interno - Calcula as multiplicações
            cout << i << "*" << j << "=" << i*j << "\n";
        }
    }
}