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
    int x;
    cin >> x;
    int a = x, b = x, c = x;
    bool p = 1, q = 1, r = 1;

    for (int i = 1; p || q || r; i *= 2)
    {
        if ((x & i) == 0)
        {
            if (p)
            {
                p = 0;
                a |= i;
            }
            else if (q)
            {
                q = 0;
                b |= i;
            }
            else
            {
                r = 0;
                c |= i;
            }
        }
    }
    cout << a << " " << b << " " << c << " " << ((a | b) & (b | c) & (c | a));
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