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

int n, m, p, i, j;

void solve(int T)
{
    int x;
    cin >> n >> m >> x;
    if (m == x)
    {
        cout << 0;
        return;
    }
    int l = 0, r = n - 1, mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        i = mid / x;
        if (mid % x)
            i++;
        if (mid + i > n)
        {
            r = mid - 1;
        }
        else
        {
            ans = max(mid, ans);
            l = mid + 1;
        }
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
        cout << "\n";
    }
}