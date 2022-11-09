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
    long long k, sum = 0, l = 0, ans;
    cin >> n >> k;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i] - k;
    }
    ans = sum;
    for (i = n - 1; i >= 0; i--)
    {
        sum -= a[i] - k;
        l = (l + a[i]) / 2;
        ans = max(ans, sum + l);
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