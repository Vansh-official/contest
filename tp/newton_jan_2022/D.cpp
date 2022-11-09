#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

long long m = 998244353;

void dfs(vector<vector<int>> &adjlist, vector<bool> &visited, vector<vector<int>> &distance, int initial, int cur, int len)
{
    visited[cur] = 1;
    distance[initial][cur] = len;
    for (int j = 0; j < adjlist[cur].size(); j++)
    {
        if (!visited[adjlist[cur][j]])
        {
            dfs(adjlist, visited, distance, initial, adjlist[cur][j], len + 1);
        }
    }
}

void solve(int T)
{
    int n, k, x, y;
    cin >> n >> k;
    vector<vector<int>> adjlist(n + 1);
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
    }

    long long ans = 0;
    vector<vector<int>> distance(n + 1, vector<int>(n + 1, -1));
    for (int i = 1; i <= n; i++)
    {
        vector<bool> visited(n + 1);
        dfs(adjlist, visited, distance, i, i, 0);
    }
    for (int i = 1; i <= n; i++)
    {
        vector<int> d(n, 0);
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                continue;
            }
        }
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