#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <iomanip>
#include <queue>
#include <climits>

using namespace std;

int n, m, i, j, k;

void printans(int ans, int t)
{
    cout << "Case #" << t << ": " << ans << endl;
}

void dfs(map<int, vector<int>> &b, vector<int> &a, int ind, int cura, int &ans, int temp)
{
    if (ind == n)
    {
        ans = min(ans, cura);
        return;
    }
    auto itr = b.find(a[ind]);
    for (int p = 0; p < itr->second.size(); p++)
    {
        dfs(b, a, ind + 1, cura + abs(temp - itr->second[p]), ans, itr->second[p]);
    }
    return;
}

void solve(int T)
{
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    auto ip = unique(a.begin(), a.end());
    a.resize(distance(a.begin(), ip));
    n = a.size();
    cin >> m;
    map<int, vector<int>> b;
    for (j = 0; j < m; j++)
    {
        cin >> k;
        auto itr = b.find(k);
        if (itr == b.end())
            b.insert({k, {j + 1}});
        else
            itr->second.push_back(j + 1);
    }
    int ans = INT_MAX, cur;
    auto itr = b.find(a[0]);
    for (i = 0; i < itr->second.size(); i++)
    {
        dfs(b, a, 1, 0, ans, itr->second[i]);
    }
    printans(ans, T);
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