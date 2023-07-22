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
#include <sstream>
#include <tuple>
#include <iomanip>

using namespace std;

int n, m, i, j, k;
string s;
long long M = 1000000007;

#define rep(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define irep(a, b, c) for (int(a) = (b); (a) >= (c); --(a))

void solve(int T)
{
    cin >> n;
    vector<long long> a(n);
    rep(i, 0, n) cin >> a[i];
    int count = 0;
    rep(i, 0, n) if (a[i] <= 0) count++;
    if (count == n)
    {
        sort(a.begin(), a.end());
        cout << a[n - 1];
        return;
    }
    long long ans = 0, x = 0, y = 0;
    rep(i, 0, n)
    {
        if (a[i] <= 0)
            continue;
        if (i % 2)
            x = a[i] + x;
        else
            y = a[i] + y;
        ans = max(ans, x);
        ans = max(ans, y);
    }
    cout << ans;
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}