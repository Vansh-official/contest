#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;

int n, m, i, j;

void solve(int T)
{
    long long x;
    cin >> n >> x;
    vector<long long> arr(n), sum(n + 1);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sum[0] = 0;
    for (i = 1; i <= n; i++)
    {
        long long cur = 0;
        for (j = 0; j < i; j++)
        {
            cur += arr[j];
        }
        sum[i] = cur;
        m = 0;
        while (j < n)
        {
            cur += arr[j++] - arr[m++];
            sum[i] = max(sum[i], cur);
        }
    }
    for (i = 0; i <= n; i++)
    {
        long long ans = 0;
        for (j = 1; j <= n; j++)
        {
            ans = max(ans, sum[j] + (min(j, i) * x));
        }
        cout << ans << " ";
    }
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