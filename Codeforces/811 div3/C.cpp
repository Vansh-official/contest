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

int n, m, i, j, k;
string s;

void solve(int T)
{
    cin >> m;
    int ans = 0;
    for (i = 9, j = 1; i >= 1 && m > 0; i--)
    {
        if (i <= m)
        {
            m -= i;
            ans += j * i;
            j *= 10;
        }
    }
    cout << ans << " ";
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