#pragma once
#ifndef UTILS_H
#define UTILS_H
using namespace std;

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define TEMPLATE template <typename T>

//Funções para Vetores
TEMPLATE void insertVector(vector<T> v, int t);
TEMPLATE void printVector(T v, unsigned short t);

//Funções para Matrizes
TEMPLATE vector<vector<T>> makeMatrix(int l, int c);
TEMPLATE void printMatrix(vector<vector<T>>& matriz);
TEMPLATE int findLMatrix(vector<vector<T>>& matriz, T x);
TEMPLATE int findCMatrix(vector<vector<T>>& matriz, T x);
TEMPLATE T minMatrix(vector<vector<T>>& matriz);
TEMPLATE T maxMatrix(vector<vector<T>>& matriz);
TEMPLATE T somaPri(vector<vector<T>>& matriz);
TEMPLATE T somaSec(vector<vector<T>>& matriz);

//Funções Diversas
void split(string a, char b);

#include "utils.tpp"

#endif