#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    
    int x = 0b0100; //o que começa com 0b em c++ é um número binário e "0100" = 4
    int y;
    y = x >> 1; //equivalente a multiplicar por 2 (x * 2)
    cout << y << endl;

    string s = "UFRN EAJ INFO EAJ";
    cout << s << endl;
    auto loc_1 = s.find("EAJ"); //find retorna a posição da primeira ocorrência da string "EAJ" na string s
    auto loc_2 = s.rfind("EAJ"); //rfind retorna a posição da última ocorrência da string "EAJ" na string s
    cout << "Find....: " << loc_1 << endl;
    cout << "RFind...: " << loc_2 << endl;

    loc_2 = s.find("TADS");
    cout << "Find TADS: " << loc_2 << endl; //find retorna -1 se a string não for encontrada

    string busca;
    getline(cin, busca);
    loc_2 = s.find(busca);
    if (loc_2 != string::npos) cout << "Achei no indice: " << loc_2 << endl;
    else cout << "Não foi encontrado" << endl;

    string a = "bom dia ";
    string b = "tads";
    string c = a + b; //concatenação de strings
    cout << c << endl;

    string d;
    getline(cin, d);
    a.append(d); //append é um método da classe string que adiciona a string d ao final da string a
    cout << a << endl;

    a.insert(0, "Ola...") ; //insert é um método da classe string que insere a string "Ola..." na posição 0 da string a
    cout << a << endl;
    a.erase(7, 8); //erase é um método da classe string que remove 5 caracteres a partir da posição 0 da string a
    cout << a << endl;

    transform(a.begin(), a.end(), a.begin(), ::toupper); //transform é um algoritmo da biblioteca <algorithm> que transforma os caracteres da string a para maiúsculo
    cout << a << endl;
    transform(a.begin(), a.end(), a.begin(), ::tolower); //transform é um algoritmo da biblioteca <algorithm> que transforma os caracteres da string a para minúsculo
    cout << a << endl;
}