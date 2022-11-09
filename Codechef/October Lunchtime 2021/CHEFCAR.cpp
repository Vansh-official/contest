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
    long long n, v;
    cin >> n >> v;
    long long ans = 0;
    ans += min(n - 1, v);
    long long x = max((long long)0, n - 1 - v);
    ans += (x * (3 + x)) / 2;

    cout << ((n - 1) * n) / 2 << " " << ans;
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