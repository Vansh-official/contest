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

int n, p, i, j;

void solve(int T)
{
    long long m;
    cin >> n >> m;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    long long ans = 0;
    for (j = n - 1; j >= 0; j--)
    {
        long long x = abs(arr[n - 1] - arr[j]) % m, y;
        if (x == 0)
            y = 0;
        else
            y = max(x, m - x);
        ans = max(ans, arr[n - 1] + arr[j] + y);
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
        cout << "\n";
    }
}