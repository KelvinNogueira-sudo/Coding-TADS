#include<iostream>
#include<vector>
#include "funcoes_tads.hpp"
using namespace std;

int main () {
    int Tam;
    cin >> Tam;
    float vetor[Tam];
    insertVetor(vetor, Tam);
    imprimeVetor(vetor, Tam);

    return 0;
}