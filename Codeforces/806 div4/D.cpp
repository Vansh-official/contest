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

int n, m, k, i, j, x;

void solve(int T)
{
    cin >> n;
    vector<string> a(n);
    set<string> s;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    vector<bool> ans(n);
    for (i = 0; i < n; i++)
    {
        bool f = 0;
        for (j = 0; j < a[i].length() - 1; j++)
        {
            string p = a[i].substr(0, j + 1), q = a[i].substr(j + 1, n - j);
            if (s.find(p) != s.end() && s.find(q) != s.end())
                f = 1;
        }
        ans[i] = f;
    }
    for (i = 0; i < n; i++)
        cout << ans[i];
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