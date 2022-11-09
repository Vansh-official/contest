#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <climits>
#include <numeric>
#include <random>

using namespace std;

int n, m, k, q, i, j;

void solve(int T)
{
    int x, y;
    cin >> x >> y;
    int z = sqrt((x * x) + (y * y));
    if (x == 0 && y == 0)
    {
        cout << 0;
    }
    else if (z * z == (x * x) + (y * y))
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