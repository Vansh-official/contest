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

long long modu = 1000000007;

void solve(int T)
{
    cin >> n;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0, j = n - 1; i < j; i++, j--)
        if (a[i] > a[j])
        {
            a[j] = a[i] - a[j];
            a[i] = 0;
        }
        else
        {
            a[i] = a[j] - a[i];
            a[j] = 0;
        }
    long long ans = 0;
    for (i = 0; i < n; i++)
    {
        if (!a[i])
            continue;
        if (i == n / 2 && n % 2)
            continue;
        long long x = a[i];
        while (i < n - 1 && a[i + 1])
            x = max(x, a[++i]);
        ans += x;
    }
    cout << ans;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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