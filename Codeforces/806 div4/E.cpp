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

void rotateMatrix(vector<string> &mat)
{
    for (int x = 0; x < n / 2; x++)
    {
        for (int y = x; y < n - x - 1; y++)
        {
            int temp = mat[x][y];
            mat[x][y] = mat[y][n - 1 - x];
            mat[y][n - 1 - x] = mat[n - 1 - x][n - 1 - y];
            mat[n - 1 - x][n - 1 - y] = mat[n - 1 - y][x];
            mat[n - 1 - y][x] = temp;
        }
    }
}

void solve(int T)
{
    cin >> n;
    vector<string> a(n);
    vector<vector<int>> b(n, vector<int>(n));
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            b[i][j] = a[i][j] - '0';
    for (int p = 0; p < 3; p++)
    {
        rotateMatrix(a);
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                b[i][j] += a[i][j] - '0';
    }
    int ans = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            ans += min(b[i][j], 4 - b[i][j]);
    cout << ans / 4;
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