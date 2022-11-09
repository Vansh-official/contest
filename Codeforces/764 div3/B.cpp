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
    long long a, b, c, x, y, z;
    cin >> a >> b >> c;
    x = ((2 * b) - c) / a;
    y = ((a + c) / (2 * b));
    z = ((2 * b) - a) / c;
    if (x > 0 && b - (x * a) == c - b)
    {
        cout << "YES";
    }
    else if (y > 0 && (y * b) - a == c - (y * b))
    {
        cout << "YES";
    }
    else if (z > 0 && b - a == (z * c) - b)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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