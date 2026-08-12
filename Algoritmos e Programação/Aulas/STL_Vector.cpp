#include <iostream>
#include <vector>
#define N 10
using std::cout;
using std::cin;
using std::vector;

int main() {

    /*SOLUÇÃO 1 (Sem usar biblioteca "vector")
    //Declaração das Variáveis
    int aux[N], pares[N], impares[N];
    int j=0, k=0; //Variáveis de tamanho auxiliar
    for(int i=0; i<N; i++) {
        cin >> aux[i]; //Entrada dos Numeros
        //Lógica 
        if (aux[i]%2 == 0) pares[j++] = aux[i]; //Se for par
        else impares[k++] = aux[i]; //Se for ímpar
    }
    for (int i=0; i < j; i++) cout << pares[i] << " ";
    cout << '\n';
    for (int i=0; i < k; i++) cout << impares[i] << " ";
    cout << '\n';
    return 0;
}*/
    /*SOLUÇÃO 2 (Com a biblioteca "vector")
    //Declaração das Variáveis
    vector<int> aux, pares, impares; //Vetores com tamanhos dinâmicos
    int num;
    for(int i = 0; i < N; i++) {
        cin >> num; //Entrada dos Números
        aux.push_back(num); //Adição dos Números ao Vetor 
        //Lógica 
        if (aux.at(i) % 2 == 0) pares.push_back(aux.at(i)); //Se for par
        else impares.push_back(aux.at(i)); //Se for ímpar
    }
    for (int i : pares) cout << i << " ";
    cout << '\n';
    for (int i : impares) cout << i << " ";
    cout << '\n';
    return 0;
}*/

    vector<int> v = {-1, -1, 0, 0, -1, 3, 1, 2};
    auto nulos = count(v.begin(), v.end(), -1);
    cout << nulos << '\n';
    
    return 0;
}