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
    long long x, y;
    cin >> x >> y;
    set<pair<long long, long long>> a;
    for (long long p = 1; p <= sqrt(y); p++)
        if (y % p == 0)
            a.insert({min(y / p, p), max(y / p, p)});
    for (auto itr = a.begin(); itr != a.end(); itr++)
    {
        long long z = itr->first, w = itr->second, p, q;
        if (z - 1 >= 0 && z - 1 <= x)
        {
            p = z - 1;
            q = x - p;
            if (q <= p)
            {
                if (p > q)
                    swap(p, q);
                cout << p << " " << q << "\n"
                     << z << " " << w;
                return;
            }
        }
        if (w + 1 <= x && w + 1 >= 0)
        {
            p = w + 1;
            q = x - p;
            if (q >= p)
            {
                if (p > q)
                    swap(p, q);
                cout << p << " " << q << "\n"
                     << z << " " << w;
                return;
            }
        }
    }
    cout << -1;
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