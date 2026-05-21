#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main () {

    //Entrada dos números
    string numbers;
    size_t search = 0;
    vector<float> x;
    vector<float> fx;
    getline(cin, numbers);
        //Remoção dos ";"
        while ((search = numbers.find(';')) != string::npos) {
            numbers.replace(search, 1, " ");
            search += 1;
        }
        //Incersão dos números no vetor
        while(!numbers.empty()) {
            size_t space = numbers.find(' ');
            string numF = numbers.substr(0, space);
            float num = std::stof(numF);
            x.push_back(num);
            numbers.erase(0, numF.size() + 1);
        }
        cout << "Vetor x: ";
        for(float i : x) cout << i << " ";
        cout << '\n'<< "Vetor fx: ";
        for(float i : x) cout << i*2 << " ";
        cout << '\n';

        return 0;
}