#include <iostream>
using namespace std;

int main () {
    // Entrada de Dados
    int consumo;
    cin >> consumo;

    //Calculo com Base no Consumo Digitado
    if (consumo <= 10) { //Até de 10m³
        cout << 7 << endl;
        return 0; 
    }
    else if (consumo > 10 && consumo <= 30) { // Até 30m³
        cout << 7 + (consumo - 10) << endl;
    }
    else if (consumo > 30 && consumo <= 100) { // Até 100m³
        cout << 7 + 20 + (consumo*2-60) << endl;
    }
    else { // Acima de 100m³
        cout << 7 + 20 +140 + (consumo*5-500) << endl;
    }
    return 0;
    }
