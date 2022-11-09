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
    map<int, int> a;
    for (i = 0; i < n; i++)
    {
        cin >> m;
        auto itr = a.find(m);
        if (itr == a.end())
            a.insert({m, 1});
        else
            itr->second++;
    }

    m = 0;
    for (auto itr = a.begin(); itr != a.end(); itr++)
        if (itr->second == 1)
            m++;
    if (m == 1 && a.rbegin()->second == 1)
    {
        bool l = 0;
        for (auto itr = a.begin(); itr != a.end(); itr++)
            if (itr->second > 2)
                l = 1;
        if (l)
            cout << 1;
        else
            cout << 2;
    }
    else
        cout << (m / 2) + (m % 2);
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