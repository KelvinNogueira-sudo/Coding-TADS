#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    /*Exemplo de Sub String
    string Nome; //string principal
    getline(cin, Nome); //entrada da string
    size_t Esp = Nome.find(" "); //localizar primeiro espaço
    string primeNome = Nome.substr (0, Esp); //substring é uma parte da string principal retirada apartir de dois indices
    cout << primeNome;
    */

    //Variáveis Indexadas
    int v[5] = {10,2,5,20,1};

    //iterar sobre o vetor (crescentes)
        //soluçao 1
        for (int i = 0; i < 5; i++) {
            if (i < 4) cout << v[i] << ",";
            else cout << v[i] << " " << endl;
        }
        cout << "---------------\n";

        //solução 2
        for (int i : v) cout << i << ","; //para cada elemento i em v
        cout << endl;

    //iterar sobre o vetor (decrescentes)
    //soluçao 1
        for (int i = 4; i >= 5; i--) {
            if (i > 0) cout << v[i] << ",";
            else cout << v[i] << " ";
        }
        cout << "---------------\n";


    //Exibir endereços de memória do vetor
    for (int i = 0; i < 5; i++) {
            if (i < 4) cout << &v[i] << ",";
            else cout << v[i] << "," << endl;
        }
    //Ordernar Vetor
    sort(v, v+5);
    for (int i : v) cout << i << ",";
}