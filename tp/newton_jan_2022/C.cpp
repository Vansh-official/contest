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

// int n, m, k, x, y, i, j;
// char c;
// string s;

void solve(int T)
{
    long long n;
    cin >> n;
    if (n % 2)
    {
        cout << -1;
        return;
    }
    n /= 2;
    for (long long i = 1; i < n; i *= (long long)2)
    {
        if ((i & n) != 0)
        {
            cout << i << " " << n - i << " " << n;
            return;
        }
    }
    cout << -1;
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