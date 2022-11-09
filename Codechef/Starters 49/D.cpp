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
    vector<long long> a(n), b(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    b[0] = a[0];
    int ans = 0;
    for (i = 1; i < n; i++)
        b[i] = b[i - 1] + a[i];
    long long x = 0;
    for (i = n - 1; i >= 0; i--)
    {
        if ((b[i] + x) / a[i] >= i + 1)
            break;
        x += a[i];
        ans++;
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