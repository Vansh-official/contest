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

int n, i, j;
string s;

long long modu = 1000000007;

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void solve(int T)
{
    long long a, b, g;
    cin >> a >> b;
    while (1)
    {
        g = gcd(a, b);
        if (g == 1)
            break;
        b /= g;
    }
    if (b == 1)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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