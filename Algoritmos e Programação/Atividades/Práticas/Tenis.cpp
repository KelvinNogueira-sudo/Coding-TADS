#include <iostream>
using namespace std;

int main() {
    char p1, p2, p3, p4, p5, p6;
    int Points = 0;

    cin >> p1 >> p2 >> p3 >> p4 >> p5 >> p6;

    if (p1 == 'V') {
        Points += 1;
    }
    if (p2 == 'V') {
        Points += 1;
    }
    if (p3 == 'V') {
        Points += 1;
    }
    if (p4 == 'V') {
        Points += 1;
    }
    if (p5 == 'V') {
        Points += 1;
    }
    if (p6 == 'V') {
        Points += 1;
    }
    
    if (Points >= 5) {
        cout << "1" << endl; }
    else if (Points >= 3) {
        cout << "2" << endl; }
    else if (Points >= 1) {
        cout << "3" << endl; }
    else 
        cout << "-1" << endl;
}