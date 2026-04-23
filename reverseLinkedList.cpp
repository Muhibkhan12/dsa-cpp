#include <iostream>
using namespace std;

class Node
{
public:
    int data;

    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    };
};
class linkedList
{
    Node *head;
    Node *tail;

public:
    linkedList()
    {
        head = tail = NULL;
    }

    void addBack(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList()
    {
        if (head == NULL)
        {
            cout << "List is empty";
            return;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
    }

    void reverseLinkedList(){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;



        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

int main()
{

    linkedList ll;
    ll.addBack(1);
    ll.addBack(2);
    ll.addBack(3);
    ll.printList();

    ll.reverseLinkedList();
    ll.printList();
    return 0;
}