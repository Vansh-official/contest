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
    int x;
    cin >> n >> x;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    p = 0;
    m = arr[n - 1];
    for (i = 0; i < n; i++)
    {
        p += arr[i] / x;
        if (arr[i] % x)
            p++;
    }
    cout << min(p, m);
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