#include "utils.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//  ===================
//  = FUNÇÕES TIPADAS =
//  ===================

//Função split
void split(string a, char b) {
    size_t pos = 0;
    while ((pos = a.find(b)) != string::npos) {
        a.replace(pos, 1,", ");
    }
    a.insert(0, "[ ");
    a += " ]";

    cout << a << '\n';
}