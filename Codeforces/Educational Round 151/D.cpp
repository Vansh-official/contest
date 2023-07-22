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

long long M = 1000000007;

void solve(int T)
{
    cin >> n;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    vector<long long> pref(n + 1, 0);
    for (i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + a[i - 1];
    long long ans = max(0ll, pref[n]);
    set<long long> seen;
    seen.insert(pref[n - 1]);
    for (i = n - 1; i >= 1; i--)
    {
        auto itr = seen.lower_bound(pref[i]);
        if (itr == seen.begin())
            continue;
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