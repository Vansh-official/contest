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

int n, m, p, i, j;

void solve(int T)
{
    cin >> n;
    vector<double> arr(n), pre(n + 1);
    for (i = 1; i <= n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    pre[0] = 0;
    pre[1] = arr[0];
    for (i = 2; i <= n; i++)
        pre[i] = pre[i - 1] + arr[i - 1];
    double ans = 0, taken = 0, nn = n;
    for (i = n; i > 0; i--)
    {
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
        cout << "\n";
    }
}