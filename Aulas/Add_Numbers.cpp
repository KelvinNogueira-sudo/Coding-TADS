#include <iostream>
using namespace std;

int main() {
    //Somatório
    double soma = 0, num; //Variável que carrega o valor da soma
    int N, i = 0; //Entrada do Número e i fora de scopo
    cout << "Digite a quantidade de números: ";
    cin >> N;
    cout << "Digite os números: ";
    
    while (i < N) { //Loop do somatório
        cin >> num; //Número digitado pelo usuário
        soma += num; //Valor atual da soma mais o número digitado
        i++;
    }
    cout << "Soma=" << soma << endl; //Saída do somátorio
}