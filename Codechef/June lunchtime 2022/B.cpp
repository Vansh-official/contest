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

int m, k, j;

void solve(int T)
{
    long long a, b, n, two = 2, zero = 0;
    cin >> a >> b >> n;
    vector<long long> temp;
    for (long long i = 1; i <= max(a, b); i *= two)
    {
        long long x, y;
        if ((a & i) != zero)
            x = 1;
        else
            x = 0;
        if ((b & i) != zero)
            y = 1;
        else
            y = 0;
        if (x != y)
            temp.push_back(i);
    }
    if (temp.size() == 0)
    {
        cout << 0;
        return;
    }
    if (temp[temp.size() - 1] >= n)
    {
        cout << -1;
        return;
    }
    int ans = 0;
    long long cur = 0;
    for (int i = temp.size() - 1; i >= 0; i--)
    {
        cur += temp[i];
        if (cur >= n)
        {
            ans++;
            cur = temp[i];
        }
    }
    if (cur > 0)
        ans++;
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