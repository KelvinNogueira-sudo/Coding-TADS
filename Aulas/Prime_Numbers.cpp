#include <iostream>
using namespace std;

int main() {

    //Verificador de Números Primos
    bool isPrime = true; //Variavel Booleana Verdadeira
    int num;

    cin >> num; //Entrada do Número
    int i = 2; //Divisor i fora de scopo
    if (num >= 0) {
        while (i < num) { //Laço de repetição
            if (num % i == 0) { //Se num for divisível (resto da divisão = 0), então não é primo
                isPrime = !isPrime; //Atualiza váriavel bool para falso se num for divisível
                break; //Sai do If
            }
            i++; //Atualiza o divisor se não for divisivel
        }
    }

    if (isPrime) { //Se bool continuar sendo verdeira
        cout << "Prime" << endl;
    } else { //Se bool for falsa
        cout << "Not Prime" << endl;
    }
    return 0;
}