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

int n, m, k, i, j, x, y;

void solve(int T)
{
    cin >> n >> k;
    map<int, vector<int>> a;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        auto itr = a.find(x);
        if (itr == a.end())
            a.insert({x, {i + 1}});
        else
            itr->second.push_back(i + 1);
    }
    while (k--)
    {
        cin >> x >> y;
        auto itr = a.find(x), btr = a.find(y);
        if (itr == a.end() || btr == a.end())
            cout << "NO";
        else if (itr->second[0] < btr->second[btr->second.size() - 1])
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
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
    }
}