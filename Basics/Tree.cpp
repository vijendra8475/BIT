#include<iostream>
#include<queue>
#include<list>
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
Node * buildTree(vector<int> a){
    i++;

    if(a[i] == -1){
        return NULL;
    }

    Node * root = new Node(a[i]);

    root -> left = buildTree(a);
    root -> right = buildTree(a);
    return root;
}

void traverse(Node * root){
    if(root == NULL){
        cout << "-1 ";
        return;
    }

    cout << root -> data << " ";
    traverse(root -> left);
    traverse(root -> right);
}


int main(){
    vector<int> a= {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node * root = buildTree(a);

    traverse(root);
}