#include <iostream>
using namespace std;

int main() {
    int n, fibo = 0, fiboAnte = 1;
    cout << "Digite o número de termos: ";
    cin >> n;

    for (int i=0; i<n; i++) {
        cout << fibo << " ";
        fibo = fibo + fiboAnte;
        fiboAnte = fibo - fiboAnte;
    }
}
