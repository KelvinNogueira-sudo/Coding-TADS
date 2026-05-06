#include <iostream>
#include <string>

int main () {
    //Entrada e Declaração dos Dados
    int indI, indJ;
    std::string word;
    getline(std::cin, word);
    std::cin >> indI >> indJ;

    //Solução com Substring
    std::string subWord = word.substr (indI,indJ);
    std::cout << subWord << std::endl;

    //Solução Raíz
    word.erase(indJ+1);
    word.erase(0, indI);
    std::cout << word << std::endl;
}