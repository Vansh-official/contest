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
    vector<vector<long long>> a(2, vector<long long>(n));
    for (i = 0; i < 2; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    long long x = 0, y = 0;
    for (i = 1; i < n; i++)
    {
        if (a[0][i] - x > 0)
            x = a[0][i];
        x++;
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (a[1][i] - x > 0)
            x = a[1][i];
        x++;
    }
    for (i = 0, j = 1; i < n; i++)
    {
        if (a[j][i] - y > 0)
            y = a[j][i];
        y++;
        if (i == 0)
            continue;
        j = (j + 1) % 2;
        if (a[j][i] - y > 0)
            y = a[j][i];
        y++;
    }
    cout << min(x, y);
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