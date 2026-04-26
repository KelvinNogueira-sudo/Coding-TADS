#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    //Entrada e Tratamento do Nome
    string NomC;
    cout << "Digite seu Nome Completo: ";
    getline (cin, NomC);
    transform(NomC.begin(), NomC.end(), NomC.begin(), ::tolower); //Transfoma o nome para Minúsculo
    
    //Extração do Primeiro Nome
    string Nom1;
    Nom1 = NomC;
    size_t Prime_Esp = Nom1.find(" "); //Primeiro "Espaço"
    Nom1.erase(Prime_Esp); //Apaga o restante do nome

    //Extração do Último Nome
    string Nom2;
    Nom2 = NomC;
    size_t Ult_Esp = Nom2.rfind(" "); //Último "Espaço"
    Nom2.erase(0, Ult_Esp + 1); //Apaga todo nome exceto o último

    //Construção do Email Automático
    string email = Nom1 + "." + Nom2 + "@ufrn.edu.br";
    cout << "Email Gerado: " << email << endl;
    return 0;
}
    /*Procurei como retirar os acentos da strings, porém eu não entendi a lógica do código 100%, além de quem meu código ficaria muito extenso,
    então optei por deixa-lo desse jeito mesmo :D */