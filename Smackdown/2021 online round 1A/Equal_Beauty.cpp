#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <queue>
#include <numeric>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    if (arr[0] == arr[n - 1] || n == 2)
    {
        cout << 0;
        return;
    }

    if (n == 3)
    {
        cout << min(arr[1] - arr[0], arr[2] - arr[1]);
        return;
    }

    long long p = 0;
    for (int i = 0; i < n - 1; i++)
    {
        p += abs(arr[i] - arr[(n - 1) / 2]);
    }
    long long q = 0;
    for (int i = 1; i < n; i++)
    {
        q += abs(arr[n - 1] - arr[(1 + (n - 1)) / 2]);
    }
    long long ans = min(p, q);
    int l = 1, r = n - 2;
    while (l <= r)
    {
        long long x = arr[n - 1] - arr[l];
        long long y = arr[r] - arr[0];
        ans = min(ans, abs(x - y));
        if (x == y)
        {
            break;
        }
        if (x > y)
        {
            l++;
        }
        else
        {
            r--;
        }
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
        solve(t);
        cout << "\n";
    }
}