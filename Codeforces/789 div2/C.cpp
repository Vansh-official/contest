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
    vector<int> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    vector<vector<int>> more(n + 1, vector<int>(n + 1));
    for (i = 0; i <= n; i++)
        for (j = 0; j <= n; j++)
            more[i][j] = 0;
    for (i = 0; i < n; i++)
        for (j = n - 1; j > i; j--)
        {
            more[i][j] = more[i][j + 1];
            if (arr[i] > arr[j])
                more[i][j]++;
        }
    for (j = 0; j < n; j++)
        for (i = 1; i < n; i++)
            more[i][j] += more[i - 1][j];
    long long ans = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 2; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                ans += more[j - 1][j + 1] - more[i][j + 1];
            }
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
        solve(i);
        cout << "\n";
    }
}