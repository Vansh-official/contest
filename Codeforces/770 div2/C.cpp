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

int n, m, x, y, i, j;

void solve(int T)
{
    cin >> n >> m;
    if (m == 1)
    {
        cout << "YES";
        for (i = 1; i <= n; i++)
        {
            cout << "\n"
                 << i;
        }
        return;
    }
    else if (n % 2)
    {
        cout << "NO";
        return;
    }
    int cur = 1;
    cout << "YES";
    for (i = 1; i <= n / 2; i++)
    {
        cout << "\n";
        for (j = 1; j <= m; j++)
        {
            cout << cur << " ";
            cur += 2;
        }
    }
    cur = 2;
    for (i = 1; i <= n / 2; i++)
    {
        cout << "\n";
        for (j = 1; j <= m; j++)
        {
            cout << cur << " ";
            cur += 2;
        }
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