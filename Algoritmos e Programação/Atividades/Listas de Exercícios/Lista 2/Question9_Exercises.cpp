#include <iostream>
using namespace std;

int main () { 
    // Entrada de Dados
    int a;
    int varn = 1;
    cout << "Digite o número de linhas: ";
    cin >> a;
        //Laço para as linhas
        for (int i = 1; i <= a; i++) { 
            //Laço para incremento e saída de números
            for (int j = 1; j <= i; j++) { 
                cout << varn << " ";
                varn += 1;   
            }
            cout << endl;
        }   
}