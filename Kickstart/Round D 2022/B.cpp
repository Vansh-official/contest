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

using namespace std;

int n, m, i, j, k;

void printans(long long ans, int t)
{
    cout << "Case #" << t << ": " << ans << endl;
}

void solve(int T)
{
    cin >> n;
    vector<long long> a(n + 1, 0);
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    cin >> m;
    vector<long long> b(m + 1, 0);
    for (i = 1; i <= m; i++)
    {
        cin >> b[i];
        b[i] += b[i - 1];
    }
    cin >> k;
    vector<long long> c(min(k, n) + 1, 0), d(min(k, m) + 1, 0);
    for (int temp = 1; temp <= min(n, k); temp++)
    {
        for (i = 0, j = n - temp; i <= temp; i++, j++)
        {
            long long x = 0;
            x += a[i];
            x += a[n] - a[j];
            c[temp] = max(x, c[temp]);
        }
    }
    for (int temp = 1; temp <= min(m, k); temp++)
    {
        for (i = 0, j = m - temp; i <= temp; i++, j++)
        {
            long long x = 0;
            x += b[i];
            x += b[m] - b[j];
            d[temp] = max(x, d[temp]);
        }
    }
    long long ans = -1;
    for (i = 0; i <= k; i++)
    {
        if (i <= min(k, n) && k - i <= min(k, m))
        {
            ans = max(c[i] + d[k - i], ans);
        }
        if (i <= min(k, m) && k - i <= min(k, n))
        {
            ans = max(d[i] + c[k - i], ans);
        }
    }
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