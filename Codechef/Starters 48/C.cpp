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
string s;

void solve(int T)
{
    cin >> n;
    map<int, int> a;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        auto itr = a.find(j);
        if (itr == a.end())
            a.insert({j, 1});
        else
            itr->second++;
    }
    int ans = 0, count = 0;
    while (count < n)
    {
        ans++;
        int ind = 1;
        for (auto itr = a.begin(); itr != a.end(); itr++)
        {
            if (ind > n)
                break;
            m = min(itr->second, itr->first - ind + 1);
            itr->second -= m;
            ind += m;
            count += m;
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

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}