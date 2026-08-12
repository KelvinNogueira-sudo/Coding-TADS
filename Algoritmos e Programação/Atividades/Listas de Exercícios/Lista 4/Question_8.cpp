#include "../../../libs/utils.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main (){
    int N, M;
    cin >> N >> M;
    vector<vector<string>> wall = makeMatrix<string>(N, M);
    bool mudou = true;

    while(mudou) {
        mudou = false;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(wall[i][j] == ".") {
                    bool up    = (i > 0) && (wall[i-1][j] == "o");
                    bool right = (i < N-1) && (j < M-1) && (wall[i][j+1] == "o") && (wall[i+1][j+1] == "#");
                    bool left  = (i < N-1) && (j > 0)   && (wall[i][j-1] == "o") && (wall[i+1][j-1] == "#");

                    if(left || right || up) {
                        wall[i][j] = "o";
                        mudou = true;
                    }
                }
            }
        }
    }

    cout << '\n';
    printMatrix(wall);
    return 0;
}