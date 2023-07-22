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

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void solve(int T)
{
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    bool f = 1;
    for (i = 0, j = n - 1; i < j; i++, j--)
        if (a[i] != a[j])
        {
            f = 0;
            break;
        }
    if (f)
    {
        cout << 0;
        return;
    }
    int g = -1;
    for (i = 0, j = n - 1; i < j; i++, j--)
        if (g == -1)
            g = abs(a[i] - a[j]);
        else
            g = gcd(g, abs(a[i] - a[j]));
    cout << g;
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