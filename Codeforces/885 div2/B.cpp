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
#include <sstream>
#include <tuple>
#include <iomanip>

using namespace std;

int n, m, i, j, k;
string s;
long long M = 1000000007;

#define rep(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define irep(a, b, c) for (int(a) = (b); (a) >= (c); --(a))

void solve(int T)
{
    cin >> n >> k;
    map<int, vector<int>> a;
    rep(i, 0, n)
    {
        cin >> m;
        if (!a[m].size())
            a[m].push_back(0);
        a[m].push_back(i + 1);
    }
    int ans = INT_MAX;
    for (auto itr = a.begin(); itr != a.end(); ++itr)
    {
        vector<int> b = itr->second, temp;
        b.push_back(n + 1);
        m = b.size();
        rep(i, 1, m) temp.push_back(b[i] - b[i - 1] - 1);
        sort(temp.begin(), temp.end());
        m = temp.size();
        if (temp[m - 1])
        {
            int x = temp[m - 1] / 2;
            temp[m - 1] = max(temp[m - 1] - x - 1, x);
        }
        int curm = INT_MIN;
        rep(i, 0, m) curm = max(curm, temp[i]);
        ans = min(ans, curm);
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
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}