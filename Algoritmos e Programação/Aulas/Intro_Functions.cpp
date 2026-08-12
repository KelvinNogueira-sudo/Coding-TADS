#include <iostream>
using std::cout;

//Criação das Funções
int soma(int a ,int b) { //Função de Soma
    return a + b;
}

void print(std::string text) { //Função equivalente ao cout
    cout << text;
}

void mySort(int v[], unsigned int tam, char sentido) { //Função Sort (Ordena um Vetor)
    int aux;
    if (sentido == 'u') { //Sentido Crescente
        for (int i=0; i<tam-1; i++) {
            if (v[i] > v[i+1]) {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                i = -1;
            }
        }
    } else if (sentido == 'd') { //Sentido Decrescente
        for (int i=0; i<tam-1; i++) {
            if (v[i] < v[i+1]) {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                i = -1;
            }
        }
    }    
}

int main() {
    //Teste e execução das funções 
    int x, y;
    std::cin >> x >> y;
    std::cout << soma(x,y) << std::endl; //Chamada da Função
    std::cout << "----------------------------------\n";

    print("Hello World\n"); //Chamada da Função
    std::cout << "----------------------------------\n";

    int v[] = {3,0,-1,1,2,10,1,100,-2,-3,0}; // 0 3

    cout << "Vetor original...\n";
    for (int i : v) cout << i << '\t';

    mySort(v, 11, 'u'); //Chamada da Função para forma Crescente
    cout << "\nOrdenado crescente...\n";
    for (int i : v) cout << i << '\t';
    
    mySort(v, 11, 'd'); //Chamada da Função para forma Decrescente
    cout << "\nOrdenado decrescente...\n";
    for (int i : v) cout << i << '\t';
    print("\n");

    return 0;
}