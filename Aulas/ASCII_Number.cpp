#include <iostream>
using namespace std;

int main() {
    char r,c; //c = Número Digitado; r = Resposta ao final
    do { //Loop
        cout << "Digite um caractere para saber o ASCII associado: ";
        cin >> c;
        cout << "Caracter digitado:";
        cout.put(c) << endl;
        cout << "Codigo ASCII:" << (int)c << endl;
        cout << "Deseja repetir? (s/n)";
        cin >> r; //Resposta do Usuário
    } while (r != 'n' && r != 'N'); //Se resposta for diferente de n
    cout << "Fora de Loop" << endl; //Sai do Loop
return 0;
}