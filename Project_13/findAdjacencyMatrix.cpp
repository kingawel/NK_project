#include <vector>
#include <ctype.h>
#include <assert.h>
#include "findAdjacencyMatrix.h"

bool ** create2DArray(int row, int col)
{
    bool **myArray = new bool* [row];
    for (int i = 0; i < row; i++) {

        myArray[i] = new bool[col];
    }
    return myArray;
}


bool** findAdjacencyMatrix(string fileIn, string fileOut, int &V, vector<string> &listOfCities)
{
    int lineCount = 0;
    string line;
    vector<char> listOfFirstLetters;
    vector<char> listOfLastLetters;
    string temp;
    bool isCracow = false;
    V = 0;  //start vertex
    int N = 0 ;

    ifstream dataIn(fileIn.c_str());
  //  ofstream dataOut(fileOut.c_str());

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
        if (listOfCities[i] == "Krakow" || listOfCities[i] == "krakow" || listOfCities[i] == "kraków" || listOfCities[i] == "Kraków")
        {
            V = i;
            isCracow = true;
        }
        assert(isalpha(listOfFirstLetters[i]) && isalpha(listOfLastLetters[i]));
        cout << listOfCities[i] << endl;

    }
    assert(isCracow == true && "There is no Cracow");

    //Create 2D Array
    bool** adjacencyMatrix = create2DArray(N,N);

    for (int i = 0; i < listOfFirstLetters.size(); i++)
    { 
        for (int j = 0; j < N; j++)
        {
            if ((char)tolower(listOfLastLetters[i]) == (char)tolower(listOfFirstLetters[j]))
            {
                if (i != j)
                {
                    adjacencyMatrix[i][j] = true;
                }
                else adjacencyMatrix[i][j] = false;
            }
            else adjacencyMatrix[i][j] = false;
    
        }

    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << adjacencyMatrix[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < listOfFirstLetters.size(); i++)
    {
        
        cout <<(char)tolower(listOfFirstLetters[i]) << endl;
        cout << listOfLastLetters[i] << endl;
    }

    cout << listOfCities.size() << endl;
    cout << endl;
    cout << sizeof(adjacencyMatrix) << endl;
    return adjacencyMatrix;
}