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
            newNode->next = head;  // FIXED
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

    // Recursive function (actual logic)
    void printUsingRecur(Node* temp) {
        if (temp == NULL) {
            return;
        }

        cout << temp->data << " -> ";
        printUsingRecur(temp->next);
    }

    // Wrapper function (this is what YOU call)
    void printUsingRecur() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        printUsingRecur(head);
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList ll;

    ll.addFront(1);
    ll.addFront(2);
    ll.addFront(3);

    ll.printUsingRecur();

    return 0;
}