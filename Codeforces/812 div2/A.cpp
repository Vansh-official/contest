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

void solve(int T)
{
    cin >> n;
    vector<pair<int, int>> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    int x = 0, y = 0, z = 0, w = 0;
    for (i = 0; i < n; i++)
    {
        x = max(x, a[i].first);
        y = max(y, a[i].second);
        z = min(z, a[i].first);
        w = min(w, a[i].second);
    }
    cout << (2 * x) + (2 * y) + (2 * abs(z)) + (2 * abs(w));
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