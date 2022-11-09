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

long long m = 1000000007;

void solve(int T)
{
    long long n, k, ans = 0;
    cin >> n >> k;
    for (long long i = 1 << 30; i > 0; i /= 2)
    {
        if (((k - 2) & i) != 0)
        {
            long long temp = 1;
            for (long long j = 1; j <= i; j++)
            {
                temp *= n;
                temp %= m;
            }
            ans = (ans + temp) % m;
        }
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