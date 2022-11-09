#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <queue>
#include <numeric>

using namespace std;

class CompareDist
{
public:
    bool operator()(pair<int, int> n1, pair<int, int> n2)
    {
        return n1.second > n2.second;
    }
};

void solve(int T)
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adjlist(n);
    vector<int> sizes(n), ans(n);
    priority_queue<pair<int, int>, vector<pair<int, int>>, CompareDist> p;
    vector<bool> visited(n);

    for (int i = 0; i < n; i++)
    {
        sizes[i] = 0;
        visited[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
        sizes[x]++;
        sizes[y]++;
    }

    for (int i = 0; i < n; i++)
    {
        p.push(make_pair(i, sizes[i]));
    }

    int cur = n, x = -1;
    while (!p.empty())
    {
        pair<int, int> y = p.top();
        p.pop();
        int z = y.first;
        if (visited[z])
        {
            continue;
        }
        visited[z] = 1;
        ans[z] = cur--;
        x = max(x, sizes[y.first]);

        int count = 0;
        for (int i = 0; i < adjlist[z].size(); i++)
        {
            if (visited[adjlist[z][i]])
            {
                continue;
            }

            sizes[adjlist[z][i]]--;
            p.push(make_pair(adjlist[z][i], sizes[adjlist[z][i]]));
        }
    }
    cout << x << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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