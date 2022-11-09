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
    long long x = max(a, b);
    x = max(x, c);
    if (a == x && b < x && c < x)
    {
        cout << 0 << " ";
    }
    else if (a == x && (b == x || c == x))
    {
        cout << 1 << " ";
    }
    else
    {
        cout << x - a + 1 << " ";
    }
    if (b == x && a < x && c < x)
    {
        cout << 0 << " ";
    }
    else if (b == x && (a == x || c == x))
    {
        cout << 1 << " ";
    }
    else
    {
        cout << x - b + 1 << " ";
    }
    if (c == x && b < x && a < x)
    {
        cout << 0;
    }
    else if (c == x && (b == x || a == x))
    {
        cout << 1;
    }
    else
    {
        cout << x - c + 1;
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