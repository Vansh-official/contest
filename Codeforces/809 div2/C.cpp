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
    cin >> n;
    vector<long long> a(n);
    long long x, y;
    for (i = 0; i < n; i++)
        cin >> a[i];
    long long ans = 0;
    vector<long long> sum(n, 0);
    for (i = n - 2; i >= 1; i--)
    {
        x = 0;
        y = 0;
        if (a[i] <= a[i - 1])
            x = a[i - 1] - a[i] + 1;
        if (a[i] <= a[i + 1])
            y = a[i + 1] - a[i] + 1;
        sum[i] += max(x, y);
        if (i + 2 < n)
            sum[i] += sum[i + 2];
    }
    ans = sum[1];
    if (n % 2 == 0)
    {
        ans = min(ans, sum[2]);
        long long temp = 0;
        for (i = 1; i < n - 4; i += 2)
        {
            x = 0;
            y = 0;
            if (a[i] <= a[i - 1])
                x = a[i - 1] - a[i] + 1;
            if (a[i] <= a[i + 1])
                y = a[i + 1] - a[i] + 1;
            x = max(x, y);
            ans = min(ans, temp + x + sum[i + 2]);
            ans = min(ans, temp + x + sum[i + 3]);
            temp += x;
        }
    }
    cout << ans;
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