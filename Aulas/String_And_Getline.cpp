#include <iostream>
#include <string>
using namespace std;

int main () {
    //Diferença de usar cin e getline para ler strings
    //string nome;
    //string greetings = "Boa Tarde, ";
    //cin >> nome; //Não funciona com nomes compostos
    //cout << greetings + nome + "!\n";
    //getline (cin, nome); //Consegue ler a linha digitada inteira, incluindo espaços
    //cout << greetings + nome + "!\n";

    //Testador de Palíndromos
    string palavra;
    bool isPalindrome = true;
    cout << "Digite Palavra: ";
    getline (cin, palavra);
    cout << "A palavra digitada foi: " << palavra << endl;
    cout << "Tamanho da palavra: " << palavra.size() << endl;
    
    int i, j;
    int s = palavra.size();
    if (s == 0) {
        cout << "Palavra Não Digitada!" << endl;
        return 0;   }

    int lim = (s-1)/2;
    for (i = 0, j = s-1; i < lim, j > lim; i++, j--) {
        if (palavra[i] != palavra[j]) {
            isPalindrome = false;   }

    if (isPalindrome) {
        cout << "A palavra é um palíndromo." << endl;
     } else {
        cout << "A palavra NÃO é um palíndromo." << endl;
     }
     return 0;
    }
}