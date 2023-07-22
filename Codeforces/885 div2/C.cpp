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

map<pair<int, int>, int> val;

int calc(int x, int y)
{
    if (!x)
        return 0;
    if (!y)
        return 1;
    if (x >= y)
    {
        int p = x / y, q = x % y;
        if (p % 2 == 1)
            return calc(y, q) + p + p / 2;
        return calc(q, y) + p + p / 2;
    }
    return 1 + calc(y, y - x);
}

void solve(int T)
{
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    set<int> arr;
    rep(i, 0, n)
    {
        if (!a[i] && !b[i])
            continue;
        // cout << calc(a[i], b[i]) << " ";
        arr.insert(calc(a[i], b[i]) % 3);
    }
    if (arr.size() > 1)
        cout << "NO";
    else
        cout << "YES";
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