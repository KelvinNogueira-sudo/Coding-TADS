#include "utils.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
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

//Função split
void split(string a, char b) {
    size_t pos = 0;
    while ((pos = a.find(b)) != string::npos) {
        a.replace(pos, 1,", ");
    }
    a.insert(0, "[ ");
    a += " ]";

    cout << a << '\n';
}