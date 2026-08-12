#include <iostream>
using namespace std;

int main () {
    //Entrada dos Dados
    int a; //Número de Entrada
    bool Primo = true; //Váriavel Booleana 
    cout << "Digite um Número: ";
    cin >> a;

    if (a <= 1) { //Se for 0 ou 1
        Primo = false;
    } else {
        for (int i = 2; i < a; i++) { //Laço de Checagem
            if (a % i == 0) { //Se existir um Número que é Divisor do Número de Entrada, então ele não é Primo
                Primo = false;
                break;
            }
        } 
    }
    //Saída dos Resultados
    if (Primo) { //Se For Primo
        cout << "É um Número Primo"<< endl;
    }
    else { //Se não for Primo
        cout << "Não é um Número Primo"<< endl;
    }
    return 0;
}