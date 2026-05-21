#include <iostream>
using namespace std;

#include "impressao.h" //Puxa a assinatura da função
//Corpo da Função
void imprimeVetor(int v[], unsigned short t) { // ou *v
  for (int i = 0; i < t; i++) {
    cout << v[i] << endl;
  }}