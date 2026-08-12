#include "../../../libs/utils.h"
#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matriz(5, vector<int>(5));
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 5);

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int num = distrib(gen);
            matriz[i][j] = num;
        }
    }
    //printMatrix(matriz); //Verificar se as contas batem

    int somaSup = 0, somaInf = 0, somaOut = 0;
    int indS = 5; //Índice dos elementos da diagonal secundária
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i < j) somaSup += matriz[i][j]; //Verifica e calcula os elementos acima da diagonal principal
            else if(i > j) somaInf += matriz[i][j]; //Verifica e calcula os elementos abaixo da diagonal principal
            if(i != j && j != indS-1) somaOut += matriz[i][j]; //Verica e calcula os elementos que não fazem parte das diagonais principal e secundária
        }
        indS -= 1; //Índice volta uma coluna a cada loop
    }
    cout << "a) " << somaSup << '\n';
    cout << "b) " << somaInf << '\n';
    cout << "c) " << somaOut << '\n';

    return 0;
}