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
    cin >> n >> k;
    vector<long long> arr(n);
    long long sum = 0, ans = 0, temp = 0;
    vector<pair<long long, int>> x(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (i = 0; i < n; i++)
        x[i] = {sum - arr[i] + n - i - 1, i};
    sort(x.begin(), x.end());
    i = 0;
    while (k--)
        arr[x[i++].second] = -1;
    for (i = 0; i < n; i++)
        if (arr[i] == -1)
            temp++;
        else
            ans += arr[i] + temp;
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