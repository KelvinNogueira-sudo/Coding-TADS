#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::vector;
#define S 7

int main() {
    int v[S] = {2,4,7,9,10,20,50};
    bool found = false;
    std::sort(v, v+S);
    int left = 0, right = 7-1, mid;
    int qualNum = 2;
    while (left <= right) {
        mid = left + (left - right)/2;
        if (qualNum == v[mid]) {
            found = true;
            break;
        }
        if (qualNum < v[mid]) {
            left = mid + 1;
        }
        if (qualNum > v[mid]) {
            right = mid - 1;
        }
    }
    if (found) {
        cout << "Achei na posição: " << mid << '\n';
        return 0;
    }
    else cout << "Não foi encontrado" << '\n';
}