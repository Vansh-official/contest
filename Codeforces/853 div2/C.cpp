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

int n, m, i, j;
string s;
long long modu = 1000000007;

void solve(int T)
{
    cin >> n >> m;
    vector<int> a(n);
    vector<pair<int, int>> b(m);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < m; i++)
        cin >> b[i].first >> b[i].second;
    vector<long long> count(n + m + 1, 0);
    map<int, vector<pair<int, int>>> arr;
    for (i = 0; i < n; i++)
        arr.insert({a[i], {{0, -1}}});
    for (i = 0; i < m; i++)
    {
        int x = b[i].first - 1;
        if (a[x] == b[i].second)
            continue;
        auto itr = arr.find(a[x]);
        itr->second[(itr->second).size() - 1].second = i;
        a[x] = b[i].second;
        itr = arr.find(a[x]);
        if (itr == arr.end())
            arr.insert({a[x], {{i + 1, -1}}});
        else
            itr->second.push_back({i + 1, -1});
    }
    for (auto itr = arr.begin(); itr != arr.end(); itr++)
    {
        vector<pair<int, int>> temp = itr->second;
        for (i = 0; i < temp.size(); i++)
        {
            if (temp[i].second == -1)
                temp[i].second = m;
            count[itr->first] += temp[i].second - temp[i].first + 1;
        }
    }
    long long ans = 0, cap = m;
    cap = cap * (cap + 1ll) / 2ll;
    for (i = 1; i <= n + m; i++)
    {
        long long temp = m + 1 - count[i];
        ans += cap - (temp * (temp - 1ll) / 2ll);
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