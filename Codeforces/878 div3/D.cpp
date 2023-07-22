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
    if (n <= 3)
    {
        cout << 0;
        return;
    }
    sort(a.begin(), a.end());
    long long ans = LLONG_MAX;
    for (i = 0; i < n; i++)
    {
        long long x = a[i] - ((a[i] + a[0]) / 2), y, z, temp;
        int l = i + 1, r = n - 2, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            y = a[mid] - ((a[i + 1] + a[mid]) / 2);
            z = a[n - 1] - ((a[mid + 1] + a[n - 1]) / 2);
            temp = max(x, y);
            temp = max(temp, z);
            ans = min(ans, temp);
            if (y <= z)
                l = mid + 1;
            else
                r = mid - 1;
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