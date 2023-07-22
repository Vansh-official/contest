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

void in(vector<long long> &a, int N)
{
    for (int x = 0; x < N; x++)
        cin >> a[i];
    return;
}

void solve(int T)
{
    cin >> n;
    vector<pair<int, int>> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    int ans = 0;
    for (i = 0; i < n; i++)
        if (a[i].second < a[i].first)
            ans++;
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