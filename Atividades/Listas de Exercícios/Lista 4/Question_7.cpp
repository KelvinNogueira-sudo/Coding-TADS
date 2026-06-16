#include "../../../libs/utils.h"
#include <iostream>
#include <iomanip>
#include <random>
#include <vector>
using namespace std;

int main() {
    vector<vector<float>> tabela(10, vector<float>(3));
    //Gerador de números aleatórios
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> distrib(0.0f, 10.0f);

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 3; j++) {
            tabela[i][j] = distrib(gen);
        }
    }
    cout << fixed << setprecision(1);
    printMatrix(tabela);

    int i = 0, j = 0;
    cout << "\nPiores Notas\n";

    //Achar quantos foram pior
    while(j < 3) {
        int lowMedia = 0;
        while(i < 10) {
            if(tabela[i][j] < 6.0) lowMedia += 1;
            i++;
        }
        cout << "Prova" << j+1 << ": " << lowMedia << " Alunos\n";
        i = 0;
        lowMedia = 0;
        j++;
    }

    i = 0;
    j = 0;
    cout << "\nMelhores Notas em Cada Prova\n";
    //Achar melhores notas em cada prova
    while(j < 3) {
        float bestNote = tabela[i][j];
        while(i < 10) {
            if(bestNote < tabela[i][j]) bestNote = tabela[i][j];
            i++;
        }
        int linha = findLMatrix(tabela, bestNote);
        cout << "Prova" << j+1 << ": " << linha+1 << " Linha\n";
        i = 0;
        bestNote = 0;
        j++;
    }

    cout << "\nMelhor Média\n";
    //Achar Aluno com melhor Média
    float melhorMedia = (tabela[0][0] + tabela[0][1] + tabela[0][2]) / 3.0f;
    int melhorLinha = 0;
    i = 1; // Começa do segundo aluno, pois o primeiro já é o "melhor" inicial
    j = 0;
    while (i < 10) {
        float mediaAtual = (tabela[i][j] + tabela[i][j+1] + tabela[i][j+2]) / 3.0f;
        if (mediaAtual > melhorMedia) {
            melhorMedia = mediaAtual;
            melhorLinha = i;
        }
        i++;
    }
    cout << "Linha: " << melhorLinha+1 << '\n';

    return 0;
}