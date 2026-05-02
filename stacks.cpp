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

class Sstack {
public:
    Node* top = NULL;

    void push(int val) {
        Node* newNode = new Node(val);

        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;   // ✅ free memory
    }

    void print() {
        Node* temp = top;

        while (temp != NULL) {   // ✅ correct condition
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    Sstack st;

    st.push(10);
    st.push(20);
    st.push(30);

    st.print();

    st.pop();

    st.print();   
}