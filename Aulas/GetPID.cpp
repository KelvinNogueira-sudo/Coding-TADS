#include <iostream>
#include <unistd.h> //Biblioteca para usar o getpid
using namespace std;

int main () {

    pid_t pid = getpid(); //Função para buscar o PID do usuário
    cout << "Meu PID: " << pid << endl;

    return 0;
}