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

void solve(int T)
{
    cin >> n >> k;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    vector<pair<int, int>> val(n - 1);
    for (i = 0; i < n - 1; i++)
        val[i] = {abs(a[i] - a[i + 1]), i + 1};
    sort(val.begin(), val.end(), greater<pair<int, int>>());
    int ans = 0;
    for (i = k - 1; i < n - 1; i++)
        ans += val[i].first;
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