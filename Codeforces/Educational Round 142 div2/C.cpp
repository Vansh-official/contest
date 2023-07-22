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
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<int>> subs;
    int ans = n;
    vector<int> pos(n + 1, -1);
    for (i = 0; i < n; i++)
        if (pos[a[i] - 1] == -1)
        {
            pos[a[i]] = subs.size();
            subs.push_back({a[i]});
        }
        else
        {
            pos[a[i]] = pos[a[i] - 1];
            subs[pos[a[i]]].push_back(a[i]);
        }
    for (i = 0; i < subs.size(); i++)
    {
        int l = subs[i][0], r = l + subs[i].size() - 1;
        m = min(l - 1, n - r);
        l -= m;
        r += m;
        int cur = m;
        cur += l - 1 + n - r;
        ans = min(ans, cur);
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