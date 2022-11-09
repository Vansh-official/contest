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

int m, i, j;

void solve(int T)
{
    long long n, k;
    cin >> n >> k;
    long long one = 0, zero = 0;
    for (long long x = 1; x < (2 << n); x *= 2)
        if ((k & x) != 0)
            one++;
        else
            zero++;
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