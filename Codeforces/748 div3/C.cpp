#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

void solve(int T)
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(k);
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = 0, pos = 0;
    for (int i = k - 1; i >= 0; i--)
    {
        if (pos >= arr[i])
        {
            break;
        }
        pos += n - arr[i];
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
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}