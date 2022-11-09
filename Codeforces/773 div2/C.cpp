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

void solve(int T)
{
    int n, i;
    long long x, y;
    cin >> n >> x;
    map<long long, int> m;
    for (i = 0; i < n; i++)
    {
        cin >> y;
        auto itr = m.find(y);
        if (itr == m.end())
        {
            m.insert({y, 1});
        }
        else
        {
            itr->second++;
        }
    }
    int ans = 0;
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        if (itr->second == 0)
        {
            continue;
        }
        y = itr->first;
        y *= x;
        auto btr = m.find(y);
        if (btr == m.end() || btr->second == 0)
        {
            continue;
        }
        if (itr->second > btr->second)
        {
            itr->second -= btr->second;
            btr->second = 0;
        }
        else if (itr->second < btr->second)
        {
            btr->second -= itr->second;
            itr->second = 0;
        }
        else
        {
            itr->second = btr->second = 0;
        }
    }
    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        ans += itr->second;
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