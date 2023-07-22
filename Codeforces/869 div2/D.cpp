#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <queue>
#include <climits>
#include <sstream>
#include <tuple>
#include <iomanip>

using namespace std;

int n, m, i, j, k;
string s;
long long M = 1000000007;

bool hasCycle(vector<vector<int>> &adjlist, vector<bool> &visited, int cur, int parent)
{
    visited[i] = 1;
    for (int p = 0; p < adjlist[cur].size(); p++)
    {
        if (!visited[adjlist[cur][p]])
        {
            if (hasCycle(adjlist, visited, cur, parent))
                return 1;
        }
        else if (adjlist[cur][p] == parent)
        {
        }
    }
    return 0;
}

void solve(int T)
{
    cin >> n >> m;
    vector<vector<int>> adjlist(n + 1);
    for (i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    vector<bool> vis(n + 1, 0);
    for (i = 0; i <= n; i++)
    {
        if (vis[i])
            continue;
        vis[i] = 1;
        if (hasCycle(adjlist, vis, i, i))
        {
        }
        vis[i] = 0;
    }
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    t = 1;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}