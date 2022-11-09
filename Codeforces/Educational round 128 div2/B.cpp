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
    vector<string> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    vector<pair<int, int>> f;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (arr[i][j] == 'R')
                f.push_back({i, j});
    sort(f.begin(), f.end());
    for (i = 1; i < n; i++)
    {
        if (f[i].first < f[0].first || f[i].second < f[0].second)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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