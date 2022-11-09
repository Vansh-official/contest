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
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            continue;
        ans++;
        while (i < n - 1 && arr[i + 1] != 0)
            i++;
    }
    cout << min(ans, 2);
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