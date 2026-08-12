#include "../../../libs/utils.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<float>> A = makeMatrix<float>(2,2);
    float P = 1, S = 1;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(i == j) P *= A[i][j];
            else S *= A[i][j];
        }
    }

    cout << P - S << '\n';
    return 0;
}