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

using namespace std;

int n, m, i, j, k;
string s;

void dfs(vector<vector<pair<int, int>>> &adjlist, vector<int> &ans, vector<bool> &visited,
         int maxl, int curl, long long cursum, int ind)
{
    visited[ind] = 1;
    ans[ind] = maxl;
    for (int p = 0; p < adjlist[ind].size(); p++)
        if (!visited[adjlist[ind][p].first])
            if (cursum + adjlist[ind][p].second >= 0)
                dfs(adjlist, ans, visited, curl + 1, curl + 1,
                    cursum + adjlist[ind][p].second, adjlist[ind][p].first);
            else
                dfs(adjlist, ans, visited, maxl, curl + 1,
                    cursum + adjlist[ind][p].second, adjlist[ind][p].first);
}

void solve(int T)
{
    int x, y, z;
    cin >> n;
    vector<vector<pair<int, int>>> adjlist(n);
    for (i = 1; i < n; i++)
    {
        cin >> x >> y >> z;
        x--;
        y -= z;
        adjlist[x].push_back({i, y});
        adjlist[i].push_back({x, y});
    }
    vector<int> ans(n);
    vector<bool> visited(n, 0);
    dfs(adjlist, ans, visited, 0, 0, 0, 0);
    for (i = 1; i < n; i++)
        cout << ans[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}