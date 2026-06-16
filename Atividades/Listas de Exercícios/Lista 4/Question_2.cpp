#include "../../../libs/utils.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    int i = 0, j = 0;
    cin >> N;
    vector<vector<int>> matriz(N, vector<int>(N));

    while(i < N) {
        while(j < N) {
            if(i == j) matriz[i][j] = 1;
            else matriz[i][j] = 0;
            j++;
        }
        j = 0;
        i++;
    }
    printMatrix(matriz);

    return 0;
}