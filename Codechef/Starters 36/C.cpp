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

void solve(int T)
{
    long long r;
    cin >> n >> r;
    vector<pair<long long, pair<long long, long long>>> a(n);
    long long ans = 0;
    for (i = 0; i < n; i++)
        cin >> a[i].second.first;
    for (i = 0; i < n; i++)
        cin >> a[i].second.second;
    for (i = 0; i < n; i++)
        a[i].first = a[i].second.first - a[i].second.second;
    sort(a.begin(), a.end());
    for (i = 0; i < n; i++)
    {
        if (r < a[i].second.first)
        {
            continue;
        }
        m = (r - a[i].second.first) / a[i].first;
        m++;
        r -= m * a[i].first;
        ans += m;
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