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
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    long long ans = 0, cost = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            ans += a[i];
            continue;
        }
        ans -= a[i];
        cost++;
        while (i < n - 1 && a[i + 1] <= 0)
        {
            i++;
            ans -= a[i];
        }
    }
    cout << ans << " " << cost;
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