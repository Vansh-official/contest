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
#define ll long long

void solve(int T)
{
    ll x, y, ans = 0;
    cin >> x >> y;
    if (x % 10 == 0)
    {
        cout << x * y;
        return;
    }
    if (x % 10 == 5)
    {
        cout << max(x * y, (x + 5) * (y - 1));
        return;
    }
    while (x % 2 != 2 && y)
    {
        ans = max(ans, x * y);
        x += x % 10;
        y--;
    }
    ll l = 1, r = y - 1, mid;
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