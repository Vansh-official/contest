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
#include <stack>

using namespace std;

void solve(int T)
{
    int n, m, j;
    cin >> n >> m;
    vector<int> ans(n * m);
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x = i + 1, y = j + 1;
            ans[ind] = max(abs(n - x) + abs(m - y), abs(1 - x) + abs(1 - y));
            ans[ind] = max(ans[ind], abs(1 - x) + abs(m - y));
            ans[ind] = max(ans[ind], abs(n - x) + abs(1 - y));
            ind++;
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < n * m; i++)
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