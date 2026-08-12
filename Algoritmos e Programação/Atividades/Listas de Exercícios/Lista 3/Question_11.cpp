#include<iostream>
#include<algorithm>
#include<string>
using std::cin;
using std::cout;
using std::string;

int main() {

    string palavra;
    cin >> palavra;
    int tamanho = palavra.length() - 1; //Tamanho da palavra - 1 para acessar o último índice da string
    std::transform(palavra.begin(), palavra.end(), palavra.begin(), ::tolower); //Transforma a string digitada em minúsculo para evitar erros
    bool isPalindrome = true; //Flag que identifica se a string é um palíndromo

    for(int i = 0; i < tamanho; i++) {
        if(palavra[i] != palavra[tamanho]) { //Compara cada caracter com seu "espelho"
            isPalindrome = false;
            break;
        }
        else {
            isPalindrome = true;
            tamanho --;
        }
    }
    if(isPalindrome) cout << "É um palindromo" << '\n';
    else cout << "Não é um palindromo" << '\n';

    return 0;
}