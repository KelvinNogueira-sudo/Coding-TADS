#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    //Entrada e Manipulação do Vetor
    int N; //Quantidade de Peças
    cin >> N;
    vector<int> vetor = {0}; //Vetor zerado
    vetor.resize(N); //Altara o tamanho pra N
        for(int i = 0; i <= N-1; i++) { //Laço de adição dos valores no vetor
        cin >> vetor[i];
        }
    sort(vetor.begin(), vetor.end()); //Orderna o vetor em ordem crescente

    //Laço de Identificação da Peça Faltando e Saída
    for(int j = 1; j <= N; j++) {
        if (j != vetor[j]) {
            cout << j;
            break;
        }
        else {
            continue;
        }
    }
}