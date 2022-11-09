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
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> arr(n * n);
    for (int i = 0; i < n * n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int m = (n / 2) + 1;
    long long x = 0;
    for (int i = m; i <= n; i += m)
    {
        x += arr[i - 1];
    }
    if (x > k)
    {
        cout << -1;
        return;
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
        solve(t);
        cout << "\n";
    }
}