#include <iostream>
#include <algorithm>
#include <random>
#include <ctime>

int main() {

    //Gerador de númros aleatórios
    std::random_device rd;
    std::mt19937 gen(rd());

    //Distribuidor de números entre 20 e 5000
    std::uniform_int_distribution<> dis(20, 5000);

    //Cronômetro
    clock_t start_t, end_t;

    //Dados do Vetor
    int N = 1000000; //Tamanho do Vetor
    std::vector<int> Vec(N); //Vetor de Tamanho N

    //Preenchimento do Vetor com números aleatórios
    for (int i = 0; i < N; i++) {
        Vec[i] = dis(gen);
    }

    /*Ordenação e Cronometragem via Insertion Sort
    start_t = clock();
    for (int i = 0; i < N-1; i++) {
        if (Vec[i] > Vec[i+1]) { //Se menor
            int aux = Vec[i];
            Vec[i] = Vec[i+1];
            Vec[i+1] = aux;
            i = -1; //Reset do Sort
        } 
    }
    end_t = clock();
    double time = (double)(end_t - start_t) / (double)CLOCKS_PER_SEC;
    std::cout.precision(6);
    std::cout << std::fixed << "Tempo Total: " << time << std::endl;
    */

    //Ordenação e Cronometragem via Função Sort
    start_t = clock();
    std::sort(Vec.begin(), Vec.end());
    end_t = clock();
    double time = (double)(end_t - start_t) / (double)CLOCKS_PER_SEC;
    std::cout.precision(9);
    std::cout << std::fixed << "Tempo Total: " << time << std::endl;
    
}

    /*Anotações dos Resultados:
    N = 10;
    Insertion Sort: 0.000002
    Sort: 0.000002
    -------------------------------------------------
    N = 100;
    Insertion Sort: 0.000736
    Sort: 0.000006
    -------------------------------------------------
    N = 1000;
    Insertion Sort: 0.735089
    Sort: 0.000068000
    -------------------------------------------------
    N = 10000;
    Insertion Sort: Indefinido, entra em loop infinito devido ao tamanho de N e por sua imprecisão (segundo a IA) ou demora muito
    Sort: 0.000978000
    -------------------------------------------------
    N = 100000;
    Insertion Sort: Indefinido, entra em loop infinito devido ao tamanho de N e por sua imprecisão (segundo a IA) ou demora muito
    Sort: 0.005293000
    -------------------------------------------------
    N = 1000000;
    Insertion Sort: Indefinido, entra em loop infinito devido ao tamanho de N e por sua imprecisão (segundo a IA) ou demora muito
    Sort: 0.105703000
    -------------------------------------------------
    */