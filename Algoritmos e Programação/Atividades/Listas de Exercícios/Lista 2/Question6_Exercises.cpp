#include <iostream>
using namespace std;

int main() {
    //Entrada dos Dados
    int a;
    cout << "Digite um Número: ";
    cin >> a;
    cout << a << ": ";
    //Laço que mostra os divisores do Número Digitado
    for (int i=1; i<=a; i++) {
        if (a % i == 0) {
            cout << i << " ";
        }
    }
}