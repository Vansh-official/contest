#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <climits>

using namespace std;

int n, m, k, x, y, i, j;
char c;
string s;

void solve(int T)
{
    cin >> n >> m;
    int a = n, b = m;
    x = 0, y = m - n;
    while (n < m)
    {
        j = (n | m) - m + x + 1;
        y = min(j, y);
        n++;
        x++;
    }
    n = a;
    m = b;
    x = 0;
    while ((n | m) != m)
    {
        j = (n | m) - m + x + 1;
        y = min(y, j);
        m++;
        x++;
    }
    y = min(y, x + 1);

    cout << y;
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