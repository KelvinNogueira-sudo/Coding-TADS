#include<iostream>
#include<algorithm>
#include<vector>
using std::cin;
using std::cout;
using std::vector;

int main() {

    int N, num;
    cout << "Quantos Números?\n";
    cin >> N;
    vector<int> vetor;
    //Entrada dos números
    for(int i = 0; i < N; i++) {
        cin >> num;
        vetor.push_back(num);
    }
    std::sort(vetor.begin(), vetor.end()); //Ordena o vetor em crescente para achar o menor e maior
    
    int maior = vetor[N-1]; //Determina qual o Maior
    int contMaior = 0; //Contador do Maior
    for(int x : vetor) if(x == maior) contMaior++;
    
    int menor = vetor[0]; //Determina qual o Menor
    int contMenor = 0; //Contador do Menor
    for(int x : vetor) if(x == menor) contMenor++;

    cout << "Maior elemento: " << maior << " | N° de Aparições: " << contMaior << '\n';
    cout << "Menor elemento: " << menor << " | N° de Aparições: " << contMenor << '\n';
}