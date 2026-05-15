#include <iostream>
#include <vector>
#define DIM 3 //Dimenção da Matriz
using std::cout;
using std::cin;
using std::vector;

int main() {

    /* Matrizes
    float A[DIM][DIM]; //Matriz Quadrática
    int i = 0, j = 0; //Variáveis de Locomoção (i = para percorrer as linhas; j = para percorrer as colunas)
    //Laço de Leitura
    while (i < DIM) {
        while (j < DIM) {
            cin >> A[i][j];
            j++;
        }
        j = 0; //Reset para andar nas colunas seguintes
        i++;
    }
    cout << "--------------\n";
    //Reset das variáveis
    i = 0;
    j = 0;
    //Laço de Saída dos Números
    while (i < DIM) {
        while (j < DIM) {
            cout << A[i][j] << '\t';
            j++;
        }
        j = 0; //Reset para andar nas colunas seguintes
        cout << '\n';
        i++;
    }
    cout << "--------------\n";
    //Reset das variáveis
    i = 0;
    j = 0;
    //Laço de Saída dos Endereços
    while (i < DIM) {
        while (j < DIM) {
            cout << &A[i][j] << '\t';
            j++;
        }
        j = 0; //Reset para andar nas colunas seguintes
        cout << '\n';
        i++;
    }
    */

    //Quadrado Mágico
    int Q[DIM][DIM] = {{2,9,4},{7,5,3},{6,1,8}}; //Teste Ok
    int sdp = 0, sds = 0;
    int slinha = 0, scoluna = 0;
    bool isMagic = true;
    vector<int> vLinhas;
    vector<int> vColunas;

    for(int i = 0; i < DIM; i++) {
        if (!isMagic) break;
            for(int j = 0; j < DIM; j++) {
                //Testa se o numero pertence a diagonal principal
                if (i==j) sdp += Q[i][j];
                //Testa se o numero pertence a diagonal secundária
                if (i+j == DIM-1) sds += Q[i][j];
                //Soma elementos da linha i
                slinha += Q[i][j];
                //Somar elementos da coluna j
                scoluna += Q[j][i];
                }
        //Guarda a soma da linha e coluna atual
        vLinhas.push_back(slinha);
        vColunas.push_back(scoluna);
            if (slinha != vLinhas.front() or scoluna != vColunas.front()) {
            isMagic = false;
            break;
            }
    slinha = 0; //Reset para a próxima linha
    }
    cout << "SDP: " << sdp << '\n';
    cout << "SDS: " << sds << '\n';

    if (isMagic) cout << "É um mágico de Tamanho: " << sdp << '\n';
    else cout << "Nem palhaço é...\n";

    return 0;
}