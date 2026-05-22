#include<iostream>
#include<vector>
#define L 3
#define C 3
using std::cin;
using std::cout;
using std::vector;

int main() {

    float matrix[L][C];
    for(int i = 0; i < L; i++) {
        for(int j = 0; j < C; j++) cout << &matrix[i][j] << " | ";
    cout << '\n';
    }

    return 0;
}

// Independente da matriz possuir um número nela ou não, o espaço na memória
// que está sendo oculpado sempre será do mesmo tamanho, 4 bytes (que é o tamanho do
// espaço oculpado por um float) já que a matriz é declarada como uma matriz de floats.