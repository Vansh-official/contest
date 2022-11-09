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
#include <cmath>
#include <climits>

using namespace std;

int n, m, i, j, k;
string s;

void solve(int T)
{
    long long x, y, b, temp, ans = 0;
    cin >> n >> x >> y;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    if (x > y)
    {
        for (i = n - 1; i >= 0; i--)
        {
            if (a[i] - (ans * y) > 0)
            {
                temp = a[i] - (ans * y);
                b = temp / x;
                if (temp % x)
                    b++;
                ans += b;
            }
        }
    }
    else
    {
        for (i = n - 1; i >= 0; i--)
        {
            if (a[i] - (ans * y) > 0)
            {
                temp = a[i] - (ans * y);
                b = temp / y;
                if (temp % y)
                    b++;
                ans += b;
            }
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