#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <cmath>

using namespace std;

void solve(int T)
{
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    for (int i = 0; i < n && k > 0; i++)
    {
        if (arr[i] > r)
        {
            break;
        }
        if (arr[i] < l)
        {
            continue;
        }
        if (k - arr[i] >= 0)
        {
            k -= arr[i];
            ans++;
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
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}