#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <list>

using namespace std;

int n, d;

class Graph
{
    int V;

    list<int> *adj;

    void DFSUtil(int v, bool visited[], int &x);

public:
    Graph(int V);
    ~Graph();
    void addEdge(int v, int w);
    int connectedComponents();
};

int Graph::connectedComponents()
{
    bool *visited = new bool[V];
    int re = -1;
    for (int v = 0; v < V; v++)
        visited[v] = false;

    for (int v = 0; v < V; v++)
    {
        if (visited[v] == false)
        {
            int x = 0;
            DFSUtil(v, visited, x);
            re = max(re, x);
        }
    }
    delete[] visited;
    return re;
}

void Graph::DFSUtil(int v, bool visited[], int &cur)
{
    visited[v] = true;

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
        {
            cur++;
            DFSUtil(*i, visited, cur);
        }
}

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

Graph::~Graph() { delete[] adj; }

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

void solve(int T)
{
    cin >> n >> d;
    Graph *g = new Graph(n);
    while (d--)
    {
        int x, y;
        cin >> x >> y;
        g->addEdge(x - 1, y - 1);
        cout << g->connectedComponents() << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}