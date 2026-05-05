#include <iostream>
using namespace std;


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


        Node* insert(Node* root, int val){
            if(root == NULL){
                Node* root = new Node(val);
                return;
            }
            if(root->data < val){
                root->left = insert(root->left,val);
            }else{
                root->right = insert(root->right,val);
            }
            return root;
        }

        // Node*  

        
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