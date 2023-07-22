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

int n, m, i, j;
string s;
long long M = 1000000007;

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
    cin >> n;
    vector<pair<long long, long long>> a(n);
    long long ans = 0;
    for (i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    for (i = 0; i < n; i++)
    {
        ans++;
        long long l = a[i].second, g = a[i].first * a[i].second;
        while (i < n - 1)
        {
            l = lcm(l, a[i + 1].second);
            g = gcd(g, a[i + 1].first * a[i + 1].second);
            if (g % l)
                break;
            i++;
        }
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