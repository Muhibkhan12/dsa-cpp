#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = tail = NULL;
    }

    Node *getHead(){
        return head;
    }

    void pushFront(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode; 
        }
    }

    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = NULL;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;   
            if(temp == NULL){
                cout << "end";
            }
        }
    }
};

int main(){

    List ll;
    ll.pushFront(1);
    ll.pushFront(2);
    ll.pushFront(3);
    ll.pushBack(4);
    ll.print();
    return 0;
};