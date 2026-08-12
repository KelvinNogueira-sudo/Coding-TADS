#include <iostream>
#include <algorithm>
#include <vector>
#define S 7
using std::cin;
using std::cout;
using std::vector;

int main() {
    int v[S] = {2,4,7,9,10,20,50};
    if ($v[0] > &v[1]) cout << "Endereços crescentes\n";
        for (i = 0; i < S; i++) cout << *(p-i) << ", \n";
        
    else cout << "Endereços decrescentes\n";

    //cout << "#v[0]:" << &v[0] << '\n';
    //cout << "#v:" << &v << '\n';

    int *p = v; //int *p = &v[0];
    int i;
    for (i = 0; i < S; i++) cout *(p+i) << ", ";

    return 0;
}