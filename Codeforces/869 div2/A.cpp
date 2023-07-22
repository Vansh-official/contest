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
    vector<string> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    vector<int> ct(n, 0);
    for (i = 1; i < n; i++)
        for (j = 0; j < k; j++)
            if (a[i][j] == a[0][j])
                ct[i]++;
    int ans = 1;
    for (i = 1; i < n; i++)
        if (ct[i] == k)
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