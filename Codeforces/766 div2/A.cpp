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
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int b = 0, x = 0, y = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'B')
            {
                if (i + 1 == r && j + 1 == c)
                {
                    ans++;
                }
                if (i + 1 == r)
                {
                    x++;
                }
                if (j + 1 == c)
                {
                    y++;
                }
                b++;
            }
        }
    }
    if (!b)
    {
        cout << -1;
    }
    else if (ans)
    {
        cout << 0;
    }
    else if (x || y)
    {
        cout << 1;
    }
    else
    {
        cout << 2;
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