// #include <iostream>
// #include <vector>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// static int index = -1;
// Node *buildTree(vector<int> preorder)
// {

//     index++;

//     if (preorder[index] == -1)
//         return NULL;

//     Node *root = new Node(preorder[index]);

//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);

//     return root;
// }

// int main()
// {
//     vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

//     Node *root = buildTree(preorder);

//     cout << root->data << endl;
//     cout << root->left->data << endl;
//     cout << root->right->data << endl;

//     // cout << root->left->left->data << endl;
//     // cout << root->left->right->data << endl;

//     cout << "right -> left :: " << root->right->left->data << endl;
//     cout << "right -> right :: " << root->right->right->data << endl;

//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

static int index = -1;

// Build tree from preorder (-1 means NULL)
Node *buildTree(const vector<int>& preorder)
{
    index++;
    if (preorder[index] == -1)
        return NULL;

    Node *root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

void preOrderTraversal(Node * root) {
    if(root == NULL){
        cout << "-1 ";
        return;
    }

    cout << root -> data << " ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);

}

void inOrderTraversal(Node *root){
    if(root == NULL){
        cout << "-1 ";
        return;
    }

    inOrderTraversal(root -> left);
    cout << root -> data << " ";
    inOrderTraversal(root -> right);
}

void postOrderTraversal(Node *root){
    if(root == NULL){
        cout << "-1 ";
        return;
    }

    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout << root -> data << " ";
}

void levelOrderTraversal(Node *root){
    if(root == NULL){
        cout << "-1 ";
        return;
    }

    cout << root -> left -> data << " ";
    cout << root -> right -> data << " ";

    levelOrderTraversal(root -> left);
    levelOrderTraversal(root -> right);
}

// ★ Vertical (Top-Down) Tree
void printTreeVertical(Node* root, string prefix = "", bool isLeft = true)
{
    if (root == NULL)
        return;

    // Print prefix
    cout << prefix;

    // Use ASCII instead of Unicode
    if (prefix == "")
        cout << "+-- ";      // Root
    else
        cout << (isLeft ? "|-- " : "`-- ");

    cout << root->data << endl;

    string newPrefix = prefix + (isLeft ? "|   " : "    ");

    printTreeVertical(root->left, newPrefix, true);
    printTreeVertical(root->right, newPrefix, false);
}


int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildTree(preorder);

    cout << "\n\nVertical Tree (Top-Down):\n";
    // printTreeVertical(root, "", false);
    levelOrderTraversal(root);


    return 0;
}
