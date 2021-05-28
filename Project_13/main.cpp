//#include "findAdjacencyMatrix.h"
#include "findSpanningTree.h"
int main()
{
    string fileIn = "file_in.txt";
    string fileOut = "file_out.txt";
    int V;
    //findAdjacencyMatrix(fileIn, fileOut,V );
    findSpanningTree( fileIn, fileOut);
}