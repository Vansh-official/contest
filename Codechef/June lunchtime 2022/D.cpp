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
    cin >> n;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    long long ans = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (2 * (arr[i] ^ arr[j]) == arr[i] + arr[j])
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
    t = 1;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}