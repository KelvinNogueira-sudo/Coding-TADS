#include "../../../libs/utils.h"
#include <iostream>
#include <iomanip> //Biblioteca para usar o setprecision
#include <random>
#include <vector>
using namespace std;

int main() {
    vector<vector<float>> matriz(4, vector<float>(4));
    //Gerador de números aleatórios
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> distrib(0.0f, 12.0f);

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            matriz[i][j] = distrib(gen);
        }
    }
    cout << fixed << setprecision(1); //Limita o número float para até 1 casa após o .
    printMatrix(matriz);

    int soma = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] > 10.0f){
                soma += 1;
            }
        }
    }
    if(soma <= 1) cout << "A matriz possui: " << soma << " valor maior que 10.\n";
    else cout << "A matriz possui: " << soma << " valores maiores que 10.\n";

    return 0;
}