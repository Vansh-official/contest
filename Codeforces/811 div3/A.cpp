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
    int x, y, h;
    cin >> n >> h >> m;
    set<int> a;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        a.insert(x * 60 + y);
    }
    x = h * 60 + m;
    int ans = INT_MAX;
    for (auto itr = a.begin(); itr != a.end(); itr++)
    {
        if (x > *itr)
            y = (60 * 24) - x + *itr;
        else
            y = *itr - x;
        ans = min(ans, y);
    }
    cout << ans / 60 << " " << ans % 60;
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