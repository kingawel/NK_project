#include<fstream>
#include<string>
#include<iostream>
#include <vector>

using namespace std;

#ifndef _FINDADJACENCYMATRIX_H_
#define _FINDADJACENCYMATRIX_H
bool** findAdjacencyMatrix(string fileIn, string fileOut, int& V, vector<string>& listOfCities);
#endif