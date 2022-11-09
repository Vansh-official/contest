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
    cin >> n;
    if (n % 2)
    {
        for (i = 0; i < n / 2; i++)
            cout << 0;
        cout << 1;
        for (i = 0; i < n / 2; i++)
            cout << 0;
    }
    else
    {
        cout << 1;
        for (i = 0; i < n - 2; i++)
            cout << 0;
        cout << 1;
    }
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