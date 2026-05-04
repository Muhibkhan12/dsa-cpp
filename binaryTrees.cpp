#include <iostream>
using namespace std;

// int arr[11] = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
// static int idx = -1;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }

        void inOrder(Node* root){
            if(root == NULL){
                cout << "Tree is empty";
                return;
            }else{
                inOrder(root->left);
                cout << root->data << " ";
                inOrder(root->right);
            }
        }

        void preOrder(Node* root){
            if(root == NULL){
                cout << "Tree is empty";
                return;
            }else{
                cout << root->data << " ";
                preOrder(root->left);
                preOrder(root->right);
            }
        }

        void postOrder(Node* root){
            if(root == NULL){
                cout << "Tree is empty" << " ";
                return;
            }else{
                postOrder(root->left);
                postOrder(root->right);
                cout << root->data << " "; 
            }
        }
};

int main(){



    return 0;
}