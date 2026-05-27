#include "funcoes_tads.hpp"
#include<iostream>
#include<vector>
using namespace std;

//Insere números no vetor a partir de um tamanho
void insertVetor(float v[], unsigned short t) {
    float num;
    for(int i = 0; i < t; i++) {
        cin >> num;
        v[i] = num;
    }
}

//Imprime um vetor
void imprimeVetor(float v[], unsigned short t) { // ou *v
    for (int i = 0; i < t; i++) {
    cout << v[i] << " ";
  }}