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
    int a, b;
    cin >> a >> b;
    x = 2;
    int y, z;

    if (a % 2 && b % 2)
    {
        y = a ^ x;
        z = b ^ x;
    }
    else if (a % 2)
    {
        y = a ^ x;
        z = y ^ b;
    }
    else
    {
        z = b ^ x;
        y = z ^ a;
    }

    if (x > y)
        swap(x, y);
    if (y > z)
        swap(y, z);
    if (x > y)
        swap(x, y);
    cout << x << " " << y << " " << z;
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