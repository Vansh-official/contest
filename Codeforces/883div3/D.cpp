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

void in(vector<long long> &a, int N)
{
    for (int x = 0; x < N; x++)
        cin >> a[x];
    return;
}

void solve(int T)
{
    long long d, h;
    cin >> n >> d >> h;
    vector<long long> a(n);
    in(a, n);
    double ans = 0, tan60 = 2.0 * h / d, val = h * d, sub = 0;
    for (i = n - 1; i >= 0; i--)
    {
        ans += val;
        if (i < n - 1 && a[i] + h > a[i + 1])
        {
            double l = a[i] + h - a[i + 1];
            sub += l * l;
        }
    }
    ans = (ans / 2.0) - (sub / tan60);
    cout << fixed << setprecision(7) << ans;
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