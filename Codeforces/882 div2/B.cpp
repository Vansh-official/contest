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

void solve(int T)
{
    cin >> n;
    vector<int> a(n), b(n);
    int x = INT_MAX;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        x &= a[i];
        b[i] = a[i];
    }
    for (i = 1; i < n; i++)
        b[i] &= b[i - 1];
    int ans = 0, cur = INT_MAX;
    for (i = n - 1; i >= 0; i--)
    {
        cur &= a[i];
        if (!cur && (!i || !b[i - 1]))
        {
            ans++;
            cur = INT_MAX;
        }
    }
    cout << max(ans, 1);
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