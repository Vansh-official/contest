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
    int q;
    long long n, m, x, y, k, ans = 1, modul = 998244353;
    cin >> n >> m >> k >> q;
    vector<pair<long long, long long>> query(q);
    for (int i = 0; i < q; i++)
    {
        cin >> query[i].first >> query[i].second;
    }
    set<long long> row, col;
    for (int i = q - 1; i >= 0; i--)
    {
        x = query[i].first;
        y = query[i].second;
        auto itr = row.find(x), jtr = col.find(y);
        if ((itr == row.end() && (m - col.size() > 0)) || (jtr == col.end() && (n - row.size() > 0)))
        {
            ans *= k;
            ans %= modul;
        }
        if (itr == row.end())
        {
            row.insert(x);
        }
        if (jtr == col.end())
        {
            col.insert(y);
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
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}