#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>
#include <climits>

using namespace std;

int n, m, i, j;
void solve(int T)
{
    cin >> n;
    vector<long long> arr(n + 1);
    arr[0] = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    long long ans = 100000000000000000;
    for (i = 1; i <= n; i++)
    {
        ans = min(ans, max(arr[i - 1], arr[n] - arr[i - 1]));
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