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

int n, m, k, i, j;

void solve(int T)
{
    int s, sum = 0;
    cin >> n >> s;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum < s)
    {
        cout << -1;
        return;
    }
    if (sum == s)
    {
        cout << 0;
        return;
    }
    j = 0;
    int ans = -1, l = 0, r;
    for (r = 0; r < n; r++)
    {
        j += arr[r];
        if (j == s)
            ans = max(r - l + 1, ans);
        else if (j > s)
        {
            while (j > s)
                j -= arr[l++];
        }
    }
    cout << n - ans;
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