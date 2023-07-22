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
    cin >> n >> k >> m;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    long long ans = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > m)
            continue;
        j = i;
        while (j < n - 1 && a[j + 1] <= m)
            j++;
        long long x = j - i + 1;
        i = j;
        if (x < k)
            continue;
        ans += x * (x - k + 1);
        ans += x - k + 1;
        ans -= ((long long)x * (x + 1) / 2) - ((long long)k * (k - 1) / 2);
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