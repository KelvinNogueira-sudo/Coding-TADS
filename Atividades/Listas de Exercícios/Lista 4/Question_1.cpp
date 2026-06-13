#include "../../../libs/utils.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> matriz = makeMatrix(3, 3);
    int menor = minMatrix(matriz);
    int maior = maxMatrix(matriz);

    cout << "Menor: " << menor << " (Linha: " << findLMatrix(matriz, menor)+1 << ", Coluna: " << findCMatrix(matriz, menor)+1 << ")\n";
    cout << "Maior: " << maior << " (Linha: " << findLMatrix(matriz, maior)+1 << ", Coluna: " << findCMatrix(matriz, maior)+1 << ")\n";

    return 0;
}