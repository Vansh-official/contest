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
    for (i = 0; n + m > 0; i++)
    {
        if (i % 2 && n)
        {
            cout << 0;
            n--;
        }
        else if (i % 2 == 0 && m)
        {
            cout << 1;
            m--;
        }
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