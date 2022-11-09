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
    vector<vector<bool>> arr(n, vector<bool>(m));
    bool temp = 1;
    i = 0;
    for (j = 0; j < m; j++)
    {
        arr[i][j++] = temp;
        temp = !temp;
        arr[i][j] = temp;
    }

    for (i = 1; i < n; i++)
        for (j = 0; j < m; j++)
            if (i % 2)
                arr[i][j] = !arr[i - 1][j];
            else
                arr[i][j] = arr[i - 1][j];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
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
    }
}