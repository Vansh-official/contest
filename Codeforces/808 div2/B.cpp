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

int n, m, i, j;

void solve(int T)
{
    int l, r;
    cin >> n >> l >> r;
    int cur = 1;
    vector<int> ans;
    for (i = 1; i <= n; i++)
    {
        int x = r / i;
        x *= i;
        if (x < l || x > r)
        {
            cout << "NO";
            return;
        }
        ans.push_back(x);
    }
    cout << "YES\n";
    for (i = 0; i < n; i++)
        cout << ans[i] << " ";
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