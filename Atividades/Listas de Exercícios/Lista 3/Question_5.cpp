#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;

int main() {
    //Entrada da Frase e Deslocador
    string frase; //Frase
    string fraseCod; //Frase Codificada
    int N; //Deslocador
    getline(cin, frase);
    cin >> N;
    //Loop que modifica cada letra da frase e adiciona em um string 
    for(char c : frase) {
        if(c == ' ') fraseCod += ' '; //Se tiver espaço
        else {
            fraseCod += char((c - 'a' + N) % 26 + 'a'); //Formula da Cifra de César
        }
    }
    cout << fraseCod << '\n'; //Saída da frase codificada
    return 0;
}
/*

--- Pseudocódigo ---
Algortimo Cifra_Cesar

INÍCIO
	VAR
		frase = STRING  //Frase recebida
		fraseCod = STRING  //Frase codificada
		N = INTEIRO  //Deslocamento no alfabeto
		
	LEIA frase
	LEIA N
		PARA CADA caractere EM frase FAÇA
			SE (caractere == ' ') fraseCod <- ' '
			SENÃO 
				fraseCod <- (carctere + N) mod 26  //Formula da Cifra de César
			FIM_SENÃO
		FIM_PARA
FIM
*/