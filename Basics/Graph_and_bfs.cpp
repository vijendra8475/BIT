#include <iostream>
#include <queue>
#include <vector>
#include <list>
using namespace std;
class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int a, int b)
    {
        l[a].push_back(b);
        l[b].push_back(a);
    }

    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " : ";
            for (int x : l[i])
                cout << x << " ";
            cout << endl;
        }
    }

    void bfs()
    {
        queue<int> Q;
        vector<int> vis(V, false);

        Q.push(0);
        vis[0] = true;

        cout << "\nBFS : ";

        while (Q.size() > 0)
        {
            int u = Q.front();
            Q.pop();
            cout << u << " ";

            for (int x : l[u])
            {
                if (!vis[x])
                {
                    vis[x] = true;
                    Q.push(x);
                }
            }
        }
    }
};



int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printGraph();

    g.bfs();
}