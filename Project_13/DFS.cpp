#include<fstream>
#include <vector>
#include <ctype.h>
#include <assert.h>
#include "findAdjacencyMatrix.h"
#include "DFS.h"


//void DFS()
vector<int> DFS(int n, bool** adjacencyMatrix, int V)
{   
    bool* visited = new bool[n];
    for (int i = 0; i < n; i++) visited[i] = false;
    stack<int> S;
    S.push(V);
    vector<int> cityIndex;
    while (!S.empty())
    {
        V = S.top();  
        S.pop();

        // Jeœli wierzcho³ek jest nieodwiedzony, to odwiedzamy go i
        // na stosie umieszczamy jego nieodwiedzonych s¹siadów

        if (!visited[V])
        {
            visited[V] = true;
            for (int i = 0; i < n; i++)
            {
                if (adjacencyMatrix[V][i] && !visited[i])
                {
                    S.push(i);
                }
            }
            cityIndex.push_back(V);
        cout << V << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < cityIndex.size(); i++)
    {
        cout << cityIndex[i];
    }
    return cityIndex;
}