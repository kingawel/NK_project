#include<fstream>
#include <vector>
#include <ctype.h>
#include <assert.h>
#include "findAdjacencyMatrix.h"

//void DFS()
vector<int> DFS(int n, int** adjacencyMatrix, int V);
{   
    bool* visited = new bool[n];
    for (i = 0; i < n; i++) visited[i] = false;
    stack<int> S;
    S.push(V);

    while (!S.empty())
    {
        V = S.top();  S.pop();

        // Jeœli wierzcho³ek jest nieodwiedzony, to odwiedzamy go i
        // na stosie umieszczamy jego nieodwiedzonych s¹siadów

        if (!visited[V])
        {
            visited[V] = true;
            for (i = 0; i < n; i++)
            {
                if (A[V][i] && !visited[i])
                {
                    S.push(i);
                }
            }

            cout << V << " ";
            }
    }


}