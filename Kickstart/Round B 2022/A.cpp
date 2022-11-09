#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <iomanip>
#include <queue>

using namespace std;

int n, m, i, j;

void printans(double ans, int t)
{
    cout << fixed << setprecision(6) << "Case #" << t << ": " << ans << endl;
}

void solve(int T)
{
    double ans = 0;
    double tr = 0, pi = 3.14159;
    int r, a, b;
    cin >> r >> a >> b;
    int cur = r;
    bool chance = 1;
    while (r)
    {
        tr = r;
        ans += (pi * tr * tr);
        if (chance)
        {
            r *= a;
        }
        else
        {
            r /= b;
        }
        chance = !chance;
    }
    printans(ans, T);
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
    }
}