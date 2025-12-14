#include<iostream>
#include<vector>
using namespace std;
class Node {
    public :
            int data;
            Node * left;
            Node * right;

            Node(int val){
                data = val;
                left = NULL;
                right = NULL;
            }
};

int i = -1;

Node* buildTree(vector<int> a){
    i++;
    if(a[i] == -1) 
        return NULL;

    Node * root = new Node(a[i]);

    root -> left = buildTree(a);
    root -> right = buildTree(a);

    return root;
    
}

void inOrder(Node * root){
    if(root == NULL){
        cout << "-1 ";
        return ;
    }
    
    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
    return ;

}

void preOrder(Node *root){
    if(root == NULL) {
        cout << "-1 ";
        return;
    }

    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);

}

void postOrder(Node *root){
    if(root == NULL){
        cout << "-1 ";
        return;
    }

    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " ";
    return;
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *tree = buildTree(preorder);

    postOrder(tree);

}

