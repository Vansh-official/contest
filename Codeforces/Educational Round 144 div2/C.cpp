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

int n, m, i, j;
string s;
long long modu = 998244353;

void solve(int T)
{
    long long l, r;
    cin >> l >> r;
    vector<long long> dp(r + 1, 1), ct(r + 1, 1);
    for (long long x = l; x <= r; x++)
        for (long long y = x * 2; y <= r; y += x)
        {
            if (dp[x] + 1 > dp[y])
            {
                dp[y] = dp[x] + 1;
                ct[y] = ct[x];
            }
            else if (dp[x] + 1 == dp[y])
                ct[y] = (ct[y] + ct[x]) % modu;
            else
                break;
        }
    j = l;
    for (i = l; i <= r; i++)
        if (dp[i] > dp[j])
            j = i;
    long long ans = 0;
    for (i = l; i <= r; i++)
        if (dp[i] == dp[j])
            ans = (ans + ct[i]) % modu;
    cout << dp[j] << " " << ans;
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