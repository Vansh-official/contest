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

int n, m, i, j;

void solve(int T)
{
    cin >> n >> m;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        a[i] = i + 1;
    vector<pair<int, pair<int, int>>> ans;
    for (i = 1; i <= n; i *= 2)
    {
        if ((i & m) == 0)
        {
            vector<int> b, c;
            for (j = 0; j < a.size(); j++)
                if ((a[j] & i) != 0)
                    b.push_back(a[j]);
                else
                    c.push_back(a[j]);
            if (b.size() == 1)
            {
                cout << -1 << "\n";
                return;
            }
            else if (b.size() % 2)
            {
                ans.push_back({1, {b[b.size() - 1], b[b.size() - 2]}});
                b[b.size() - 2] != b[b.size() - 1];
                b.pop_back();
            }
            for (j = 1; j < b.size(); j++)
            {
                ans.push_back({2, {b[j - 1], b[j]}});
                b[j] ^= b[j - 1];
            }
            c.push_back(b[b.size() - 1]);
            a = c;
        }
    }
    for (i = 1; i < a.size(); i++)
    {
        ans.push_back({1, {a[i - 1], a[i]}});
        a[i] |= a[i - 1];
    }
    if (a[a.size() - 1] == m)
        for (i = 0; i < ans.size(); i++)
            cout << ans[i].first << " " << ans[i].second.first << " " << ans[i].second.second << "\n";
    else
        cout << -1 << "\n";
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
    }
}