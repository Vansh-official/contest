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

int n, m, i, j;
string s;

void solve(int T)
{
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    long long ans = LLONG_MAX;
    for (long long p = 1; p <= k; p++)
    {
        long long l = a[n - 1] / p, r = l;
        for (i = n - 2; i >= 0; i--)
        {
            long long low = 1, high = k, mid = (low + high) / 2, cur = a[i], temp;
            while (low <= high)
            {
                mid = (low + high) / 2;
                temp = a[i] / mid;
                if (min(abs(cur - l), abs(cur - r)) > min(abs(temp - l), abs(temp - r)))
                    cur = temp;
                else if ((min(abs(cur - l), abs(cur - r)) >= min(abs(temp - l), abs(temp - r))) && temp < l)
                    cur = temp;
                if (temp < l)
                    high = mid - 1;
                else if (temp > r)
                    low = mid + 1;
                else
                {
                    cur = l;
                    break;
                }
            }
            if (cur < l)
                l = cur;
            else if (cur > r)
                r = cur;
        }
        ans = min(ans, r - l);
    }
    cout << ans;
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
        cout << "\n";
    }
}