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
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> arr[i][j];
    int maxi = 0, maxj = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] > arr[maxi][maxj])
            {
                maxi = i;
                maxj = j;
            }
        }
    maxi++;
    maxj++;
    int ans = max(maxi * maxj, (n - maxi + 1) * (m - maxj + 1));
    ans = max(ans, maxi * (m - maxj + 1));
    ans = max(ans, (n - maxi + 1) * maxj);
    cout << ans;
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