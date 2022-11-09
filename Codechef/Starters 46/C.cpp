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
    cin >> n;
    vector<int> arr(n);
    vector<pair<int, int>> dif;
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] != i + 1)
        {
            j = min(arr[i], i + 1);
            k = max(arr[i], i + 1);
            ans = max(ans, min(n - j + 1, k));
        }
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