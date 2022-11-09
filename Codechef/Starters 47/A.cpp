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
    cin >> n;
    vector<int> a(n);
    int f = -1, l = -1;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            f = i + 1;
        else if (a[i] == n)
            l = i + 1;
    }
    if (f < l)
        cout << f - 1 + n - l;
    else
        cout << f - 1 + n - l - 1;
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