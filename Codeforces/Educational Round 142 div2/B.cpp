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
    int a, b, c, d, ans = 0;
    cin >> a >> b >> c >> d;
    if (a)
    {
        ans += a;
        n = min(b, c);
        ans += 2 * n;
        b -= n;
        c -= n;
        if (!b)
            b = c;
        b += d;
        n = min(a, b);
        a -= n;
        b -= n;
        ans += n;
        if (b)
            ans++;
        cout << ans;
    }
    else
        cout << 1;
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
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}