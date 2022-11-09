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

int findMinCost(vector<vector<int>> const &cost, int m, int n)
{
    if (n == 0 || m == 0)
        return INT_MAX;

    if (m == 1 && n == 1)
        return cost[0][0];

    return min(findMinCost(cost, m - 1, n), findMinCost(cost, m, n - 1)) + cost[m - 1][n - 1];
}

void solve(int T)
{
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> arr[i][j];
    if (n % 2 == m % 2)
    {
        cout << "NO";
        return;
    }
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