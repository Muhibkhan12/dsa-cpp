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

    void addEdge(Graph* g, int src, int dest){
        Node* newNode = new Node;
        newNode->data = dest;
        newNode->next = g->adjList[src];
        g->adjList[src] = newNode;

        Node* newNode2 = new Node;
        newNode2->data = src;
        newNode2->next = g->adjList[dest];
        g->adjList[dest] = newNode2;
    }
};


int main(){

    return 0;
}