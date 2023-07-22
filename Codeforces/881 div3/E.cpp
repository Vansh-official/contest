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
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(2));
    for (i = 0; i < m; i++)
        cin >> a[i][0] >> a[i][1];
    int q;
    cin >> q;
    vector<int> changes(q);
    for (i = 0; i < q; i++)
        cin >> changes[i];
    int l = 0, r = q, mid, ans = -1;
    while (l <= r)
    {
        bool flag = 0;
        mid = (l + r) / 2;
        vector<int> pref(n + 1, 0);
        for (i = 0; i < mid; i++)
            pref[changes[i]]++;
        for (i = 1; i <= n; i++)
            pref[i] += pref[i - 1];
        for (i = 0; i < m; i++)
            if (pref[a[i][1]] - pref[a[i][0] - 1] > (a[i][1] - a[i][0] + 1) / 2)
            {
                flag = 1;
                break;
            }
        if (flag)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
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