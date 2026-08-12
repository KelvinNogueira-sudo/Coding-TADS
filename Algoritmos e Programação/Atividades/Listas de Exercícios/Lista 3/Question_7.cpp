#include<iostream>
using std::cin;
using std::cout;

int main() {

    int x;
    int y;
    int *px = &x;
    int *py = &y;
    cin >> x >> y;
    if (px > py) cout << "Conteúdo: " << x << " Endereço: " << px << '\n';
    else cout << "Conteúdo: " << y << " Endereço: " << py << '\n';

    return 0;
}