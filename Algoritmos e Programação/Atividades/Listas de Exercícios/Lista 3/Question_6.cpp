#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;

int main() {
    //Entrada e Declaração dos dados
    int N; //Quantidade de Linhas
    char C; //Caractere
    cin >> N >> C; 
    int tam = (N*2)-1; //Tamanho da Linha
    string linha(tam, ' '); //String para a Ponta da Seta
    string base = linha; //String para a Base

    int add = 0; //Variável de adição 
    for(int i = 0; i < N; i++) { //Laço de Formação da Ponta da Seta
        cout << linha << '\n';
        int idx = tam/2 + add; //Índice aonde será colocado o caractere na linha
        linha.insert(idx, 1, C); //Insere no índice, um caractere C
            if (i > 0) { //If para evitar que saia "**" na primeira linha
                linha.insert(idx, 1, C); //Insere novamente o caractere
                linha.erase(0, 1); //Apaga um " "
            }
        add += 1;
    }
    for(int j = 0; j < 3; j++) { //Laço de Formção da Base
        int idxB = tam/2 - 1; //Acha o meio -1
        if(j <= 0) { //If que adiciona "***" apenas uma vez
            base.insert(idxB, 3, C); //Adiciona no índice do meio -1, 3 caracteres C
        }
        cout << base << '\n';
    }
    return 0;
}