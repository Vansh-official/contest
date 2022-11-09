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

using namespace std;

void solve(int T)
{
    long long x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << x;
    }
    else if (x > y)
    {
        cout << (2 * x) + y;
    }
    else if (y % x == 0)
    {
        cout << x;
    }
    else
    {
        int z = (x + y) / 2;
        z = z % x;
        cout << y - z;
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