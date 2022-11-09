#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <climits>
#include <queue>

using namespace std;

int n, m, i, j;
long long ans;
long long dp[1002][1002];

void printans(int t)
{
    cout << "Case #" << t << ": " << ans << endl;
}

void dfs(vector<vector<long long>> &arr, int r, long long curans, long long last)
{
    if (r == n)
    {
        ans = min(ans, curans);
        return;
    }
    bool d = 0;
    for (int p = 0; p < arr[r].size(); p++)
    {
        if (arr[r][p] != -1)
        {
            d = 1;
            long long x = arr[r][p];
            arr[r][p] = -1;
            dfs(arr, r, curans + abs(last - x), x);
            arr[r][p] = x;
        }
    }
    if (!d)
    {
        dfs(arr, r + 1, curans, last);
    }
}

void solve(int T)
{
    cin >> n >> m;
    vector<vector<long long>> arr(n, vector<long long>(m));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < n + 2; i++)
    {
        sort(arr[i].begin(), arr[i].end());
    }
    ans = LLONG_MAX;
    vector<int> dif(n - 1);
    for (i = 0; i < n; i++)
    {
        j = 0;
        for (int k = 1; k < m; k++)
        {
            if ((abs(arr[i][k] - arr[i + 1][0]), abs(arr[i][k] - arr[i + 1][m - 1])) <
                (abs(arr[i][j] - arr[i + 1][0]), abs(arr[i][j] - arr[i + 1][m - 1])))
            {
                j = k;
            }
        }
    }
    long long last = 0;
    for (i = 0; i < n - 1; i++)
    {
    }
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
    }
}
