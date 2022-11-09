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

using namespace std;

int n, m, i, j;

void solve(int T)
{
    cin >> n;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 3 && arr[1] % 2)
    {
        cout << -1;
        return;
    }
    long long ans = 0;
    for (i = 1; i < n - 1; i++)
    {
        ans += arr[i] / 2;
        arr[i] = arr[i] % 2;
    }
    for (i = 1; i < n - 1; i++)
    {
        if (arr[i] == 1 && ans == 0)
        {
            cout << -1;
            return;
        }
        else if (arr[i] == 1)
        {
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