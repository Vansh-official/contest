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
    long long x, n;
    cin >> x >> n;
    long long y = n / 4, z = n % 4;
    if (z == 0)
    {
        cout << x;
        return;
    }
    if (x % 2 == 0)
    {
        if (z == 1)
        {
            cout << x - n;
        }
        else if (z == 2)
        {
            cout << x + 1;
        }
        else
        {
            cout << x + (4 * (y + 1));
        }
    }
    else
    {
        if (z == 1)
        {
            cout << x + n;
        }
        else if (z == 2)
        {
            cout << x - 1;
        }
        else
        {
            cout << x - (4 * (y + 1));
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