#include <iostream>
using namespace std;

int main() {
    //Entrada de Dados
    int num = 0; //Proximo Número Par
    int num_past = 0; //Número Anterior
    int num_atual;

    //Laço do Somatório
    for (int i=0; i<50; i++) {
        num += 2;
        num_atual = num + num_past;
        num_past = num_atual;
    }
    //Saída do Somatório
    cout << "Soma dos 50 Primeiros Pares: " << num_atual << endl;
    return 0;
}