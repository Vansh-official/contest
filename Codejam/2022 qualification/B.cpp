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

void solve(int T)
{
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    int c, r, m, y, total;
    c = min(arr[0][0], arr[1][0]);
    c = min(c, arr[2][0]);
    r = min(arr[0][1], arr[1][1]);
    r = min(r, arr[2][1]);
    m = min(arr[0][2], arr[1][2]);
    m = min(m, arr[2][2]);
    y = min(arr[0][3], arr[1][3]);
    y = min(y, arr[2][3]);
    total = c + r + m + y;
    if (total < 1000000)
    {
        cout << "Case #" << T << ": IMPOSSIBLE";
        return;
    }
    cout << "Case #" << T << ": ";
    total -= 1000000;
    if (c >= total)
    {
        c -= total;
        total = 0;
    }
    else
    {
        total -= c;
        c = 0;
    }
    if (r >= total)
    {
        r -= total;
        total = 0;
    }
    else
    {
        total -= r;
        r = 0;
    }
    if (m >= total)
    {
        m -= total;
        total = 0;
    }
    else
    {
        total -= m;
        m = 0;
    }
    if (y >= total)
    {
        y -= total;
        total = 0;
    }
    else
    {
        total -= y;
        y = 0;
    }
    cout << c << " " << r << " " << m << " " << y;
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