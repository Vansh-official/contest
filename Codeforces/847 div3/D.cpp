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
    sort(a.begin(), a.end());
    vector<pair<int, long long>> count;
    for (i = 0; i < n; i++)
    {
        int x = a[i], y = 1;
        while (i < n - 1 && a[i + 1] == x)
        {
            i++;
            y++;
        }
        count.push_back({x, y});
    }
    long long ans = count[0].second;
    // for (i = 0; i < count.size(); i++)
    //     cout << count[i].first << " " << count[i].second << "\n";
    for (i = 1; i < count.size(); i++)
        if (count[i].first == count[i - 1].first + 1 && count[i].second > count[i - 1].second)
            ans += count[i].second - count[i - 1].second;
        else if (count[i].first != count[i - 1].first + 1)
            ans += count[i].second;
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