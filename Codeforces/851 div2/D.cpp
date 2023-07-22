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

int n, m, i, j, k;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n;
    vector<long long> a(n + 1, 0);
    for (i = 1; i <= n; i++)
        cin >> a[i];
    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1));
    for (i = 0; i <= n; i++)
        for (j = 0; j <= n; j++)
            dp[i][j] = -1;
    for (i = 1; i <= n; i++)
        dp[1][i] = 1;
    for (i = 2; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            dp[i][j] = max(dp[i][j - 1], )
        }
    }
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
    for (int i = 1; i <= t; i++)
    {
        solve(t);
    }
}