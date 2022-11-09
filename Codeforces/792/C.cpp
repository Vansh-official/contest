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

void solve(int T)
{
    cin >> n >> m;
    vector<vector<pair<int, int>>> arr(n, vector<pair<int, int>>(m)), brr(n, vector<pair<int, int>>(m));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> k;
            brr[i][j] = arr[i][j] = {k, j};
        }
        sort(arr[i].begin(), arr[i].end());
    }
    int x = 1, y = 1;
    for (i = 0; i < n; i++)
    {
        bool p = 0;
        for (j = 0; j < m; j++)
            if (arr[i][j].second != j)
            {
                x = arr[i][j].second;
                y = j;
                p = 1;
                for (int k = 0; k < n; k++)
                    swap(brr[k][x], brr[k][y]);
                break;
            }
        if (p)
            break;
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (arr[i][j].first != brr[i][j].second)
            {
                cout << -1;
                return;
            }
    cout << x << " " << y;
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