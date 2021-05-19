#include<fstream>
#include <vector>
#include <ctype.h>
#include <assert.h>
#include "findSpanningTree.h"

void findSpanningTree(string fileIn, string fileOut)
{
    int lineCount = 0;
    string line;
    vector<string> listOfCities;
    vector<char> listOfFirstLetters;
    vector<char> listOfLastLetters;
    string temp;

    ifstream dataIn(fileIn.c_str());
    ofstream dataOut(fileOut.c_str());

    while (dataIn.good())
    {
        getline(dataIn, line);
        listOfCities.push_back(line);

    }
    for (int i = 0; i < listOfCities.size(); i++)
    {
        temp = listOfCities[i];
        listOfFirstLetters.push_back(temp[0]);
        listOfLastLetters.push_back(temp[temp.size() - 1]);
        assert(isalpha(listOfFirstLetters[i]) && isalpha(listOfLastLetters[i]));
        cout << listOfCities[i] << endl;

    }
    for (int i = 0; i < listOfFirstLetters.size(); i++)
    {
        cout << listOfFirstLetters[i] << endl;
        cout << listOfLastLetters[i] << endl;
    }

    cout << listOfCities.size() << endl;
}