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
    cin >> n;
    vector<int> arr(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ans[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        int x = ans[i - 1], y = arr[i];
        if (y > x || x % y)
        {
            cout << -1;
            return;
        }
        ans[i] = y;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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