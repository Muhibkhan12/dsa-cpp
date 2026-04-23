#include <iostream>
#include <vector>
using namespace std;

class Node{
    int data;
    Node* next;
};
class Graph{
    int vertices;
    Node** adjList;


    Graph* createGraph(int v){
        Graph* g = new Graph;
        g->vertices  = v;
        g->adjList = new Node*[v];
        
        for(int i=0; i<v; i++){
            g->adjList[i] = NULL;
        };
        return g;
    }
};


int main(){

    return 0;
}