#include<iostream>
#include<algorithm>
#include<vector>
using std::cin;
using std::cout;
using std::vector;

int main() {

    vector<float> vetor;
    float num;
    int T, N;
    cout << "Digite o parâmetro (0 - Crescente | 1 - Decrescente) e a Quantos de números\n";
    cin >> T >> N;
    //Entrada dos Números
    for(int i = 0; i < N; i++) {
        cin >> num;
        vetor.push_back(num);
    }
    //Crescente
    if (T == 0) std::sort(vetor.begin(), vetor.end());
    //Decrescente
    else if (T == 1) std::sort(vetor.begin(), vetor.end(), std::greater<float>()); //greater é uma função da biblioteca algorithm para ordenar do maior pro menor
    //Se T for Inválido
    else cout << "Parâmetro T inválido" << '\n';
    //Saída do Vetor Oredenado
    for(float i : vetor) cout << i << " ";
    cout << '\n';

    return 0;    
}