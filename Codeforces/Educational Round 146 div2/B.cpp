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

long long modu = 1000000007;

void solve(int T)
{
    cin >> n >> m;
    vector<pair<int, int>> x, y;
    for (i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            x.push_back({i, n / i});
            x.push_back({n / i, i});
        }

    for (i = 1; i <= sqrt(m); i++)
        if (m % i == 0)
        {
            y.push_back({i, m / i});
            y.push_back({m / i, i});
        }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int ans = INT_MAX;
    for (i = 0; i < x.size(); i++)
    {
        int l = 0, r = y.size() - 1, mid, ind = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (y[mid].first <= x[i].first)
            {
                ind = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        ans = min(ans, x[i].first - 1 + x[i].second + y[ind].second);
    }
    for (i = 0; i < y.size(); i++)
    {
        int l = 0, r = x.size() - 1, mid, ind = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (x[mid].first <= y[i].first)
            {
                ind = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        ans = min(ans, y[i].first - 1 + y[i].second + x[ind].second);
    }
    cout << ans;
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

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