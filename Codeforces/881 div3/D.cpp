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

void dfs(vector<vector<int>> &adjlist, vector<bool> &visited, vector<long long> &count, int cur)
{
    visited[cur] = 1;
    int children = 0;
    for (int ind = 0; ind < adjlist[cur].size(); ind++)
    {
        int v = adjlist[cur][ind];
        if (!visited[v])
        {
            dfs(adjlist, visited, count, v);
            children += count[v];
        }
    }
    if (!children)
        children = 1;
    count[cur] = children;
    return;
}

void solve(int T)
{
    int u, v;
    cin >> n;
    vector<vector<int>> adjlist(n);
    for (i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    vector<long long> count(n, 0);
    vector<bool> visited(n, 0);
    dfs(adjlist, visited, count, 0);
    int q;
    cin >> q;
    while (q--)
    {
        cin >> u >> v;
        u--;
        v--;
        cout << count[u] * count[v] << "\n";
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
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
    }
}