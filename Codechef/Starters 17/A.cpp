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
    int a, b, p, q;
    cin >> a >> b >> p >> q;
    if (a == p && b == q)
    {
        cout << 0;
    }
    else if ((abs(a - b) % 2) == (abs(p - q) % 2))
    {
        cout << 2;
    }
    else
    {
        cout << 1;
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