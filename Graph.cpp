#include <iostream>
#include <vector>
using namespace std;

class Node{

    public:
        int data;
        Node* next;
};
class Graph{
    public:
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

        void printGraph(){
            for(int i=0; i<vertices; i++){
                cout << i << " ";
                Node* temp = adjList[i];

                while(temp != NULL){
                    cout << temp->data << " ";
                    temp = temp->next;
                }
                cout << endl;
            }
        }
};


int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,0);
    return 0;
}