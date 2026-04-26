#include <iostream>
#include <cmath>
using namespace std;

int main () {
    //Entrada de Dados
    double pi_atual = 0.0; //Valor de Pi Atual
    double pi_anterior = 0.0; //Valor de Pi Anterior
    double soma = 0.0; //Soma das Fraçoes Anteriores
    double deno = 1.0; //Denomindor
    double sinal = 1.0; //Sinal
    double diferenca; //Módulo que será comparado com a expressão 5*10⁻⁵

        do {  //Laço de Repetição da Equação 
            pi_anterior = pi_atual;
            double termo = sinal * (1.0 / deno);
            soma += termo;
            pi_atual = 4.0 * soma;
            diferenca = fabs(pi_atual - pi_anterior);
            deno += 2.0;
            sinal *= -1.0;
        } while (diferenca >= 5e-5);
        //Saída do Valor
        cout << "Valor Aproximado de PI: " << pi_atual << endl;
    return 0;
}
//Sim, esse código é meio complexo de entender de primeira -_-