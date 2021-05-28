#include<fstream>
#include <ctype.h>
#include <assert.h>
#include "findAdjacencyMatrix.h"
#include "DFS.h"
#include "findSpanningTree.h"

//void DFS()
void findSpanningTree(string fileIn, string fileOut)
{
	int V = 0;
	vector<string> listOfCities;
	vector<string> spanningTreeCities;
	ofstream dataOut(fileOut.c_str());
	bool** adjacencyMatrix = findAdjacencyMatrix(fileIn, fileOut, V, listOfCities);
	int n = listOfCities.size();
	vector<int> SpanningTreeIndex = DFS(n, adjacencyMatrix, V);
	for (int i = 0; i < SpanningTreeIndex.size(); i++)
	{	
		spanningTreeCities.push_back(listOfCities[SpanningTreeIndex[i]]);
		cout << SpanningTreeIndex[i] << " ";
		cout << spanningTreeCities[i]<< " ";
    }
	cout << endl;
	if (spanningTreeCities.size() == listOfCities.size())
	{
		cout << "Utworzony szereg to: ";
		dataOut << "Utworzony szereg to: ";
		for (int i = 0; i < spanningTreeCities.size(); i++)
		{
			cout << spanningTreeCities[i] << "  ";
			dataOut << spanningTreeCities[i] << "  ";

		}
	}
	else
	{
		cout << "Niestety nie mo¿na u³o¿yæ szeregu z podanych miast" << endl;
		dataOut << " Utworzony szereg to: ";
	}

}