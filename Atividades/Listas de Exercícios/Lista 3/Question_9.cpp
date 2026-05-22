#include<iostream>
using std::cin;
using std::cout;

int main() {

    int vetor[5];
    int *pv = vetor; //Ponteiro que aponta para o ìndice 0 do vetor
    for(int i = 0; i < 5; i++) {
        cin >> *(pv + i); //Entrada do número no índice apontado pelo  ponteiro
    }
    for(int j = 0; j < 5; j++) {
        *(pv + j) = *(pv + j) * 2; //Dobra o conteúdo do índice indicado pelo ponteiro
        cout << *(pv+j) << " "; //Saída dos dobros
    }
    cout << '\n';
    return 0;
}