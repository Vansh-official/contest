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
    cin >> n;
    vector<long long> odd, even;
    for (i = 0; i < n; i++)
    {
        cin >> m;
        if (m % 2)
        {
            odd.push_back(m);
        }
        else
        {
            even.push_back(m);
        }
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    vector<pair<long long, long long>> ans(3);
    ans[0].first = ans[0].second = ans[1].first = ans[1].second = ans[2].first = ans[2].second = 0;
    i = odd.size() - 1;
    int x = 1;
    while (1)
    {
        if (i < 0)
            break;
        if (x)
            ans[0].first += odd[i--];
        else
            ans[0].second += odd[i--];
        x = (x + 1) % 2;
    }
    j = even.size() - 1;
    x = 1;
    while (1)
    {
        if (j < 0)
            break;
        if (x)
            ans[1].first += even[j--];
        else
            ans[1].second += even[j--];
        x = (x + 1) % 2;
    }
    x = 1;
    i = odd.size() - 1;
    j = even.size() - 1;
    while (1)
    {
        bool c = 0;
        if (x)
        {
            if (i >= 0)
            {
                ans[2].first += odd[i--];
                c = 1;
            }
            if (j >= 0)
            {
                ans[2].second += even[j--];
                c = 1;
            }
        }
        else
        {
            if (i >= 0)
            {
                ans[2].second += odd[i--];
                c = 1;
            }
            if (j >= 0)
            {
                ans[2].first += even[j--];
                c = 1;
            }
        }
        x = (x + 1) % 2;
        if (!c)
        {
            break;
        }
    }
    sort(ans.begin(), ans.end());
    cout << max(ans[2].first, ans[2].second);
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