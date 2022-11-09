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

int n, m, p, i, j;
string s;

void solve(int T)
{
    int a, b, x = 0;
    cin >> n >> a >> b;
    if (b > a)
        swap(a, b);
    vector<int> arr;
    int last = -1, lastc = 0;
    for (i = 1; i < pow(2, n); i *= 2)
    {
        int c, d;
        if ((i & a) != 0)
            c = 1;
        else
            c = 0;
        if ((i & b) != 0)
            d = 1;
        else
            d = 0;
        if ((!c && !d))
            x |= i;
        else if ((d && !c) || (!d && c))
        {
            last = i;
            lastc++;
            if (!d && c)
                x |= i;
        }
    }
    if (lastc > 1)
        x -= last;
    cout << x;
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