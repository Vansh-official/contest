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

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

void solve(int T)
{
    cin >> n >> m;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    long long x = 1;
    for (long long p = 1; p <= m; p++)
        x = lcm(x, p);
    vector<long long> ans;
    long long y = 1;
    for (i = n - 1; i >= 0; i--)
    {
        if (x % a[i] == 0)
        {
            ans.push_back(a[i]);
            y = lcm(y, a[i]);
            if (y == x)
                break;
        }
    }
    sort(ans.begin(), ans.end());
    if (y == x)
        cout << ans[ans.size() - 1] - ans[0];
    else
        cout << -1;
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