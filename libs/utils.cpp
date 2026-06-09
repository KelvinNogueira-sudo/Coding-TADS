#include "utils.h"
#include<iostream>
#include<vector>
using namespace std;

//Insere números no vetor a partir de um tamanho
void insertVetor(vector<float> v, int t) {
    float valor;
    v.resize(t);
    for (int i = 0; i < t; ++i) {
        v[i] = valor;
    }
}

//Imprime um vetor
void imprimeVetor(float v[], unsigned short t) { // ou *v
    for (unsigned short i = 0; i < t; i++) {
        cout << v[i] << " ";
    }
}