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
#include <stack>
#include <climits>

using namespace std;

void solve(int T)
{
    int n;
    long long k, sum = 0;
    cin >> n >> k;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum <= k)
    {
        cout << 0;
        return;
    }
    sort(arr.begin(), arr.end());
    long long y = arr[0], ans = sum - k;
    for (int i = n - 1; i >= 1; i--)
    {
        y += arr[i];
        long long z = sum - y, temp;
        if (z == k)
        {
            ans = min(ans, arr[0] + n - i);
        }
        else if (z > k)
        {
            temp = z - k;
            z = n - i + 1;
            long long p = temp / z;
            if (temp % z)
            {
                p++;
            }
            ans = min(ans, arr[0] + p + n - i);
        }
        else
        {
            temp = k - z;
            z = n - i + 1;
            long long p = temp / z;
            p = min(arr[0], p);
            ans = min(ans, arr[0] - p + n - i);
        }
    }
    cout << ans;
}

/*
long long x = k / n;
    long long ans = 0;
    if (arr[0] <= x)
    {
        x = arr[0];
    }
    else
    {
        ans += arr[0] - x;
    }
    sum -= (arr[0] - x);
    for (int i = n - 1; i >= 1; i--)
    {
        if (sum <= k)
        {
            break;
        }
        ans++;
        sum -= (arr[i] - x);
        arr[i] = x;
    }
    cout << ans;
*/

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