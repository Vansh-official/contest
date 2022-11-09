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
#include <stack>

using namespace std;

void dfs(vector<vector<pair<int, int>>> &adjlist, int &i, vector<bool> &visited, int &cur)
{
    visited[i] = true;
    if (cur == 2)
    {
        cur = 3;
    }
    else
    {
        cur = 2;
    }
    for (int j = 0; j < adjlist[i].size(); j++)
    {
        if (!visited[adjlist[i][j].first])
        {
            adjlist[i][j].second = cur;
            dfs(adjlist, adjlist[i][j].first, visited, cur);
        }
    }
}

void solve(int T)
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n - 1);
    vector<vector<pair<int, int>>> adjlist(n);
    vector<int> indegree(n, 0);
    int count = 0, ind = -1;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i].first >> arr[i].second;
        arr[i].first--;
        arr[i].second--;
        if (arr[i].first < arr[i].second)
            swap(arr[i].first, arr[i].second);
        indegree[arr[i].first]++;
        indegree[arr[i].second]++;
        adjlist[arr[i].first].push_back({arr[i].second, -1});
        adjlist[arr[i].second].push_back({arr[i].first, -1});
        if (indegree[arr[i].first] > 2)
        {
            count++;
            ind = arr[i].first;
        }
        if (indegree[arr[i].second] > 2)
        {
            count++;
            ind = arr[i].second;
        }
    }
    if (count > 0)
    {
        cout << -1;
        return;
    }
    vector<bool> visited(n, false);
    int i;
    for (i = 0; i < n; i++)
    {
        if (indegree[i] == 1)
        {
            break;
        }
    }
    int cur = 3;
    dfs(adjlist, i, visited, cur);

    vector<int> ans(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        int p;
        int x = arr[i].first, y = arr[i].second;
        for (int j = 0; j < adjlist[x].size(); j++)
        {
            if (adjlist[x][j].first == y && adjlist[x][j].second != -1)
            {
                p = adjlist[x][j].second;
            }
        }
        for (int j = 0; j < adjlist[y].size(); j++)
        {
            if (adjlist[y][j].first == x && adjlist[y][j].second != -1)
            {
                p = adjlist[y][j].second;
            }
        }
        cout << p << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}