#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <iomanip>
#include <queue>
#include <climits>

using namespace std;

int n, m, i, j, k;

void printans(int ans, int t)
{
    cout << "Case #" << t << ": " << ans << endl;
}

void solve(int T)
{
    cin >> n >> m >> k;
    int ans = 0;
    vector<pair<int, int>> a(m);
    vector<bool> f(n, 0);
    for (i = 0; i < m; i++)
    {
        cin >> a[i].first >> a[i].second;
        f[a[i].second - 1] = 1;
    }
    for (i = 0; i < n; i++)
        if (f[i])
            ans++;

    printans(ans, T);
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