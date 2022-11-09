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

int n, m, k, i, j;

long long modulo = 998244353;

void solve(int T)
{
    cin >> n;
    if (n % 2)
    {
        cout << 0;
        return;
    }
    long long ans = 1;
    for (long long i = 2; i <= n / 2; i++)
    {
        ans *= i;
        ans %= modulo;
        ans *= i;
        ans %= modulo;
    }
    cout << ans;
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