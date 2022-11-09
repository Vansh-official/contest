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

int n, m, i, j, k;

void solve(int T)
{
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    map<int, int> s;
    for (i = 0; i < n; i++)
    {
        auto itr = s.find(a[i]);
        if (itr != s.end())
            itr->second++;
        else
            s.insert({a[i], 1});
    }
    int last = n + 1;
    for (i = n - 1; i >= 0; i--)
    {
        int c = 1;
        while (i > 0 && a[i - 1] == a[i])
        {
            i--;
            c++;
        }
        if (a[i] <= last)
        {
            auto itr = s.find(a[i]);
            if (itr != s.end() && itr->second > c)
            {
                break;
            }
            else
            {
                last = a[i];
                itr->second -= c;
            }
        }
        else
            break;
    }
    int ans = 0;
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        if (itr->second > 0)
            ans++;
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