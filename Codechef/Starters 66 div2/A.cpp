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

long long modu = 1000000007;

void solve(int T)
{
    long long n, m, k, x;
    cin >> n >> m >> k >> x;
    x = x % ((k * n) + m);
    if (x > (k - 1) * n || !x)
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