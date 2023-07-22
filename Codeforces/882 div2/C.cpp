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
    vector<int> a(n), b(9, 0);
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        ans = max(ans, a[i]);
    }
    for (j = 8; j >= 0; j--)
    {
        if ((a[n - 1] & (1 << j)) != 0)
            continue;
        int cur = 0, val = -1;
        for (i = n - 1; i >= 0; i--)
        {
            cur ^= a[i];
            if ((cur & (1 << j)) != 0 && cur > a[n - 1])
                val = max(val, cur);
        }
        if (val != -1)
        {
            n++;
            a.push_back(val);
        }
    }
    cout << max(ans, a[n - 1]);
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