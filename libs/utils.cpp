#include "utils.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//  ========================
//  = FUNÇÕES PARA VETORES =
//  ========================

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

//  =========================
//  = FUNÇÕES PARA MATRIZES =
//  =========================

//Criar Matriz
vector<vector<int>> makeMatrix(int l, int c) { //Ordenamento (Linhas x Colunas)
    vector<vector<int>> matriz(l, vector<int>(c));
    int i = 0, j = 0; //Variaveis de controle

    while(i < l) {
        while(j < c) {
            cin >> matriz[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    return matriz;
}

//Imprime Matriz
void printMatrix(vector<vector<int>>& matriz) {
    int l = matriz.size(); //Quantas linhas
    int c = matriz[0].size(); //Quantas colunas
    int i = 0, j = 0; //Variaveis de controle

    while(i < l) {
        while(j < c) {
            cout << matriz[i][j];
            if(j < c - 1) cout << " "; // Cria um espaço entre as colunas
            j++;
        }
        cout << '\n';
        j = 0;
        i++;
    }
}

//Acha a Linha de um Número X na Matriz
int findLMatrix(vector<vector<int>>& matriz, int x) {
    bool found = false;
    int i = 0, j = 0;
    int l = matriz.size(); //Quantas linhas
    int c = matriz[0].size(); //Quantas colunas

    while(i < l){
        while(j < c){
            if(matriz[i][j] == x) {
                found = true;
                break;
            }
            j++;
        }
        if (found) break;
        j = 0;
        i++;
    }
    if (!found) return -1;
    return i; //Retorna o índice
}

//Acha a Coluna de um Número X na Matriz
int findCMatrix(vector<vector<int>>& matriz, int x) {
    bool found = false;
    int i = 0, j = 0;
    int l = matriz.size(); //Quantas linhas
    int c = matriz[0].size(); //Quantas colunas

    while(i < l){
        while(j < c){
            if(matriz[i][j] == x) {
                found = true;
                break;
            }
            j++;
        }
        if (found) break;
        j = 0;
        i++;
    }
    if (!found) return -1;
    return j; //Retorna o índice 
}

//Achar Menor Valor na Matriz
int minMatrix(vector<vector<int>>& matriz) {
    int menor = matriz[0][0];
    int l = matriz.size(); //Quantas linhas
    int c = matriz[0].size(); //Quantas colunas
    int i = 0, j = 0;

    while(i < l){
        while(j < c){
            if(menor > matriz[i][j]) menor = matriz[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    return menor;
}

//Achar Maior Valor na Matriz
int maxMatrix(vector<vector<int>>& matriz) {
    int maior = matriz[0][0];
    int l = matriz.size(); //Quantas linhas
    int c = matriz[0].size(); //Quantas colunas
    int i = 0, j = 0;

    while(i < l){
        while(j < c){
            if(maior < matriz[i][j]) maior = matriz[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    return maior;
}

//  ====================
//  = FUNÇÕES DIVERSAS =
//  ====================

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