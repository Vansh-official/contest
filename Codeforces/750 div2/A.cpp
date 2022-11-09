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

void solve(int T)
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long x = a % 2, y = b % 2, z = c % 2;
    if (x == y && y == z)
    {
        cout << 0;
    }
    else if (z == 0 && x == 1 && y == 1)
    {
        if (a > 1)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }
    else if (y == 0 && x == 1 && y == 1)
    {
        if (b > 1 || a > 2)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
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