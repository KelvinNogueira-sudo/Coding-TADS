#pragma once
#ifndef UTILS_H
#define UTILS_H
using namespace std;

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

//Funções para Vetores
void insertVetor(vector<float> v, int t);
void imprimeVetor(float v[], unsigned short t);

//Funções para Matrizes
vector<vector<int>> makeMatrix(int l, int c);
void printMatrix(vector<vector<int>>& matriz);
int findLMatrix(vector<vector<int>>& matriz, int x);
int findCMatrix(vector<vector<int>>& matriz, int x);
int minMatrix(vector<vector<int>>& matriz);
int maxMatrix(vector<vector<int>>& matriz);

//Funções Diversas
void split(string a, char b);

#endif