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

int n, m, i, j, k, x, y;
string s;

void solve(int T)
{
    cin >> n >> m;
    vector<int> a(n);
    vector<pair<int, int>> b(n, {0, INT_MAX});
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < m; i++)
    {
        cin >> x >> y;
        x--;
        y--;
        b[x].first++;
        b[y].first++;
        b[x].second = min(b[x].second, a[y]);
        b[y].second = min(b[y].second, a[x]);
    }
    if (m % 2 == 0)
    {
        cout << 0;
        return;
    }
    int ans = INT_MAX;
    for (i = 0; i < n; i++)
    {
        int temp = m - b[i].first;
        if (temp % 2)
        {
            ans = min(ans, a[i] + b[i].second);
        }
    }
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