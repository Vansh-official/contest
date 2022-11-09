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

int n, m, k, i, j;

void solve(int T)
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if (b > a)
        ans++;
    if (c > a)
        ans++;
    if (d > a)
        ans++;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}