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

long long M = 1000000007;

void solve(int T)
{
    long long k;
    cin >> n >> k;
    vector<pair<long long, long long>> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i].first;
    for (i = 0; i < n; i++)
        cin >> a[i].second;
    sort(a.begin(), a.end());
    long long ans = LLONG_MAX, len = 0, cur = 0, temp;
    i = 0;
    j = 0;
    while (i < n)
    {
        while (j < n)
        {
            temp = a[j].second - a[j].first + 1;
            if (temp > k - len)
                temp = k - len;
            len += temp;
            cur = a[j].first + temp - 1;
            if (len == k)
                break;
            j++;
        }
        if (len < k)
            break;
        long long x = j - i + 1;
        x *= 2;
        ans = min(ans, x + cur);
        if (i == j)
        {
            len = 0;
            i++;
            j++;
        }
        else
        {
            len -= temp;
            len -= a[i].second - a[i].first + 1;
            i++;
        }
    }
    cout << (ans == LLONG_MAX ? -1 : ans);
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
        cout << "\n";
    }
}