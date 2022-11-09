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

using namespace std;

long long m, k, x, y, j;
int n, i;

int knapSack(vector<long long> wt, vector<long long> val)
{
    vector<long long> dp(k + 1, 0);
    for (i = 1; i <= n; i++)
    {
        for (int w = k; w >= 0; w--)
        {
            if (wt[i - 1] <= w)
                dp[w] = max(dp[w], dp[w - wt[i - 1]] + val[i - 1]);
        }
    }
    return dp[k];
}

int bs(long long target)
{
    long long l = 1, r = y, mid, ans;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (y / mid <= target)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

void solve(int T)
{
    cin >> n >> k;
    vector<pair<long long, long long>> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i].first;
    }
    for (i = 0; i < n; i++)
    {
        cin >> arr[i].second;
    }
    vector<long long> wt, val;
    long long temp = 0;
    for (i = 0; i < n; i++)
    {
        long long t = 0;
        x = arr[i].first;
        y = 1;
        while (y < x)
        {
            if (2 * y <= x)
            {
                y = 2 * y;
            }
            else
            {
                y += (y / bs(x - y));
            }
            t++;
        }
        if (t == 0)
        {
            temp += arr[i].second;
        }
        else
        {
            wt.push_back(t);
            val.push_back(arr[i].second);
        }
    }
    n = val.size();
    cout << knapSack(wt, val) + temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}