#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = tail = NULL;
    }

    Node* getHead() {
        return head;
    }

    void addFront(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void addBack(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // ✅ single recursive function
    void printUsingRecur(Node* temp) {
        if (temp == NULL) {
            cout << "NULL";
            return;
        }

        cout << temp->data << " -> ";
        printUsingRecur(temp->next);
    }
};

int main() {
    LinkedList ll;

    ll.addFront(1);
    ll.addFront(2);
    ll.addFront(3);

    ll.printUsingRecur(ll.getHead());  // ✅ pass head

    return 0;
}