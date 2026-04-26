#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main () {
    // Interface e Entrada dos Dados
    float a, b, c;
    cout << "Digite trẽs números: ";
    cin >> a >> b >> c;
    cout << "Escolha uma Opição: " << endl;
    cout << "1) - Maior" << endl;
    cout << "2) - Menor" << endl;
    cout << "3) - Média Aritmética" << endl;
    cout << "4) - Média Geométrica" << endl;
    cout << "5) - Média Ponderada com Pesos 4,5 e 6" << endl;

    // Processamento dos Dados com Base na Resposta do Usuário
    int resposta;
    cin >> resposta;

        switch (resposta) {
            case 1: // Maior 
                cout << "Maior Número: " << max(a, max(b, c)) << endl;
                break;
            case 2: // Menor
                cout << "Menor Número: " << min(a, min(b, c)) << endl;
                break;
            case 3: // Média Aritmética
                cout << "Média Aritmética: " << (a + b + c)/3 << endl;
                break;
            case 4: // Média Geométrica
                cout << "Média Geométrica: " << cbrt(a * b * c) << endl;
                break;
            case 5: // Média Ponderada com Pesos 4, 5 e 6
                cout << "Média Ponderada com Pesos 4, 5 e 6: " << (a*4 + b*5 + c*6)/(4+5+6) << endl;
                break;
            default: //Caso usuário digite algo fora das opções setadas
                cout << "Opção Inválida" << endl;
        }
    return 0;
}