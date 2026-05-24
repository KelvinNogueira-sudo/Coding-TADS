#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::vector;

int main() {

    int order; //Ordem da Matriz (Dimenção)
    cout << "Digite a Ordem da Matriz Quadrada\n";
    cin >> order;
    vector<vector<int>> matrix(order, vector<int>(order)); //Vetor de um vetor de inteiros (Matriz)
    int i = 0, j = 0; //Variáveis de locomoção (i = linhas; j = colunas)
    int somaP = 0, somaS = 0; //Valor da soma das diagonais

    //Entrada de Valores
    cout << "Digite os Valores da Matriz: \n";
    while(i < order) {
        while(j < order) {
            cin >> matrix[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    cout << "------------\n";
    //Reset das Variáveis
    i = 0;
    j = 0;

    //Soma da Diagonal Principal
    while(i < order) {
        while(j < order) {
            if (i == j) somaP += matrix[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    //Reset das Variáveis
    i = 0;
    j = 0;

    //Soma da Diagonal Secundária
    int indR = order - 1; //Índice de Retrocesso das colunas para achar o próximo número da diagonal secundária
    while(i < order) {
        while(j < order) {
            if (j == indR) somaS += matrix[i][j];
            j++;
        }
        j = 0;
        indR--; //Retorna um valor anterior para achar o próximo número da diagonal secundária 
        i++;
    }
    cout << "Soma da Diagonal Principal: " << somaP << '\n';
    cout << "Soma da Diagonal Secundária: " << somaS << '\n';
    cout << "Soma Final: " << somaP + somaS << '\n';

    return 0;
}