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

int n, m, i, j, x;

void solve(int T)
{
    long long k;
    cin >> n >> k;
    vector<long long> arr(n), f(n, 0);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int ao = 0, ae = 0;
    for (i = 1; i < n - 1; i++)
    {
        if (i + k - 1 > n - 1 && i - k + 1 < 0)
            f[i] = 1;
        if (arr[i] > arr[i - 1] + arr[i + 1])
            f[i] = 0;
        if (!f[i])
            if (i % 2 == 0)
                ao++;
            else
                ae++;
    }
    cout << max(ao, ae);
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