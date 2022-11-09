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
    string s;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        cin >> m >> s;
        int u = 0;
        for (j = 0; j < m; j++)
            if (s[j] == 'U')
                u--;
            else
                u++;
        a[i] = (a[i] + u) % 10;
        if (a[i] < 0)
            a[i] += 10;
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
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