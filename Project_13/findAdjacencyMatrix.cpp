#include<fstream>
#include <vector>
#include <ctype.h>
#include <assert.h>
#include "findAdjacencyMatrix.h"

int ** create2DArray(int row, int col)
{
    int **myArray = new int* [row];
    for (int i = 0; i < row; i++) {

        myArray[i] = new int[col];
    }
    return myArray;
}

//void DFS()
int** findAdjacencyMatrix(string fileIn, string fileOut)
{
    int lineCount = 0;
    string line;
    vector<string> listOfCities;
    vector<char> listOfFirstLetters;
    vector<char> listOfLastLetters;
    string temp;
   // vector<string> temp;
    vector<vector<string>> adjacencyMatrix;
    int N = 0 ;

    ifstream dataIn(fileIn.c_str());
    ofstream dataOut(fileOut.c_str());

    while (dataIn.good())
    {
        getline(dataIn, line);
        listOfCities.push_back(line);
        N++;
    }

    for (int i = 0; i < listOfCities.size(); i++)
    {
        temp = listOfCities[i];
        listOfFirstLetters.push_back(temp[0]);
        listOfLastLetters.push_back(temp[temp.size() - 1]);

        assert(isalpha(listOfFirstLetters[i]) && isalpha(listOfLastLetters[i]));
        cout << listOfCities[i] << endl;

    }
    //Create 2D Array
    int** myArray = create2DArray(N,N);

    for (int i = 0; i < listOfFirstLetters.size(); i++)
    { 
        for (int j = 0; j < N; j++)
        {
         //TODO
        }

    }

    cout << myArray[0][0] << endl;
    cout << myArray[1][0] << endl;
    cout << myArray[2][2] << endl;;
    for (int i = 0; i < listOfFirstLetters.size(); i++)
    {
        
        cout <<(char)tolower(listOfFirstLetters[i]) << endl;
        cout << listOfLastLetters[i] << endl;
    }

    cout << listOfCities.size() << endl;
    return myArray;
}