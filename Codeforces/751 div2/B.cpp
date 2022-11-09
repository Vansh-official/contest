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

int ans[2001][2001];

void solve(int T)
{
    int n;
    cin >> n;
    vector<int> arr(n), count(n + 1);
    for (int i = 1; i <= n; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
        ans[0][i] = arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x = arr[j];
            arr[j] = ans[i][j] = count[x];
        }
        for (int j = 1; j <= n; j++)
        {
            count[j] = 0;
        }
        for (int j = 0; j < n; j++)
        {
            count[arr[j]]++;
        }
    }
    int q, x, k;
    cin >> q;
    while (q--)
    {
        cin >> x >> k;
        k = min(n, k);
        cout << ans[k][x - 1] << "\n";
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
    }
}