#include "../../../libs/utils.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> A = makeMatrix<int>(2,2);
    vector<vector<int>> B = A;
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++){
            B[i][j] *= A[i][j];
        }
    }

    printMatrix(B);
    return 0;
}