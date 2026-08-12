#include<iostream>

int main(){
    /*Ideia:
    pecorrer o vetor do índice anterior ao atual até o inicio
    se achar o mesmo numero, resetar e pedir para inserir um novo
    */
    int N, S = 0;
    bool found = false;
    double mA;
    std::cin >> N;
    int v[N]; //Vetor
        for (int i = 0; i < N; i++) {
            std::cin >> v[i]; //Adição dos números ao Vetor
            if (i > 0) { //Checagem do número
                for (int j = i-1; j >= 0; j--) { //Laço que verifica se os números anteriores são iguais
                    if (v[i] == v[j]) { //Se encontrar
                        std::cout << "Digite um Número Diferente!" << std::endl;
                        found = true;
                        i -= 1; //Retorna pro índice anterior
                        break; //Saí do laço
                    }
                }
            }
            if (!found) S += v[i]; //Se não achou
            found = false; //Reset da Flag    
        }
    mA = S/N; //Calcula média aritmética
    std::cout << "Média Aritmética: " << mA << std::endl;
    return 0;
}