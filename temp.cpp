// #include <iostream>
// #include <list>
// #include<queue>
// using namespace std;
// class Graph
// {
//     int V;
//     list<int> *l;
//     int temp = 0;

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         l = new list<int>[V];
//     }

//     void addEdge(int u,int v){
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }

//     void print(){
//         for(int i=0; i<V; i++){
//             cout << i << " : ";
//             for(int x : l[i]){
//                 cout << x << " ";
//             }
//             cout << endl;
//         }
//     }

//     void bfs(){
//         queue <int> Q;
//         vector <int> vis(V,false);

//         Q.push(0);
//         vis[0] = true;

//         cout << "BFS : ";

//         while (Q.size() > 0)
//         {
//             int u = Q.front();
//             Q.pop();
//             cout << u << " ";

//             for(int v : l[u]){
//                 if(!vis[v]){
//                     vis[v] = true;
//                     Q.push(v);
//                 }
//             }
//         }

//     }
// };

// int main(){
//     Graph g(5);
//     g.addEdge(0,1);
//     g.addEdge(0,3);
//     g.addEdge(0,2);
//     g.addEdge(1,2);
//     g.addEdge(1,3);
//     g.addEdge(3,4);

//     g.print();

//     g.bfs();

// }

// #include <iostream>
// #include <list>
// #include <vector>
// using namespace std;
// int pos = -1;
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

// Node *buildTree(vector<int> a)
// {
//     pos++;

//     if (a[pos] == -1)
//     {
//         return NULL;
//     }

//     Node *root = new Node(a[pos]);

//     root->left = buildTree(a);
//     root->right = buildTree(a);

//     return root;
// }

// void traverse(Node * root){
//     if(root == NULL){
//         cout << "-1 ";
//         return;
//     }

//     cout << root -> data << " ";
//     traverse(root -> left);
//     traverse(root -> right);
// }


// void bfs(Node * root){
    
// }



// int main(){
//     vector<int> a = {
//         1,2,3,-1,-1,-1,-1
//     };

//     Node * root = buildTree(a);

//     traverse(root);
// }