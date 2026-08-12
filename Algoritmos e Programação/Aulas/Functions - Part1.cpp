#include<iostream>
#include<vector>
#include<cmath>
using std::cout;
using std::cin;

// ---Funções---

double myRoot(double num, double m) { //Função que calcula a raiz m de um número 
    return pow(num, 1/m); //Corpo da Função
}

//Função Print apenas com Assinatura
void printTxt(std::string text, std::string symbol); //Funções void não retornam nenhum valor (elas fazem algo, mas não retornam um valor)
void imprimeNome(std::string s, unsigned char n); //Imprime uma String n vezes
void printVector(std::vector<double>); //Imprime um Vetor


int main() {

    /*cout << "Chamando função ..\n";
    double res;
    res = myRoot(16, 3);
    cout << "Saída: " << res << '\n';
    double num, indice;
    cout << "Lendo valores pelo Konsole: ";
    cin >> num >> indice;
    res = myRoot(num, indice);
    cout << "Saída: " << res << '\n';
    
    printTxt("tads", "*");
    //Testando função do slide da aula
    std::string a;
    getline(cin, a);
    imprimeNome(a, 256); //Acima de 256 (limite do unsigned char) ele dá pau
    */

    std::vector<double> a = {1.2,5.4,5.1,9.7};
    printVector(a);

    for (double i : a) i = 2*i; //Altera valores do Vetor
    for (double i : a) cout << i*2 << "; "; //Precisa iterar para modificar o vetor
    cout << '\n';
    return 0;
}

// ---Interação da Funções abaixo da Main---

//Corpo das Funções
void printTxt(std::string text, std::string symbol) {
    text = symbol + text + symbol;
    cout << text << '\n';
}

void imprimeNome(std::string s, unsigned char n) {
  unsigned char i = 0;
  while (i < n) {
    std::cout << s << std::endl;
    i++;
  }
}

void printVector(std::vector<double> v) {
    for (double i : v) cout << i << "; ";
    cout << '\n';
}