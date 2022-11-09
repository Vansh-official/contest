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

int n, m, k, i, j, x;

void solve(int T)
{
    cin >> n >> k;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    vector<bool> check(n);
    for (i = 0; i < n - 1; i++)
        if (arr[i] < 2 * arr[i + 1])
            check[i] = 1;
    int ans = 0;
    for (i = 0, j = 1; i < n - 1; i++)
    {
        if (check[i])
            j++;
        else
            j = 1;
        if (j > k)
            ans++;
    }
    cout << ans;
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
        cout << "\n";
    }
}