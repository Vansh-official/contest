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
string s;

void solve(int T)
{
    cin >> n >> m;
    vector<int> a(n);
    s = "";
    for (i = 0; i < m; i++)
        s += "B";
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        int x = min(a[i], m + 1 - a[i]) - 1, y = max(a[i], m + 1 - a[i]) - 1;
        if (s[x] == 'B')
            s[x] = 'A';
        else
            s[y] = 'A';
    }
    cout << s;
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