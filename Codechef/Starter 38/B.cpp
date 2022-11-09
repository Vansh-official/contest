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

int n, m, p, i, j;

void solve(int T)
{
    cin >> n;
    vector<pair<int, int>> a(n), b(n);
    for (i = 0; i < n; i++)
        cin >> a[i].first;
    for (i = 0; i < n; i++)
        cin >> a[i].second;
    for (i = 0; i < n; i++)
    {
        b[i].first = a[i].second;
        b[i].second = a[i].first;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long x = 0, y = 0, ans = 0, c = 0;
    for (i = 0, j = 0; i < n && j < n; i++, j++)
    {
        if (a[i] == b[i])
        {
            x = y = 1;
            while (i < n - 1 && a[i] == a[i + 1])
            {
                i++;
                x++;
            }
            while (j < n - 1 && b[j] == b[j + 1])
            {
                j++;
                y++;
            }
            if (a[i].first == a[i].second)
                c += (x - 1) * x / 2;
            else
                ans += (x * y);
        }
    }
    ans /= 2;
    ans += c;
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