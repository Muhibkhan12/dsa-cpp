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

class LinkedList{
    Node* head;
    Node* tail;
public:
    LinkedList(){
        head = tail = NULL;
    }

    Node *getHead(){
        return head;
    }

};


int main(){

}