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

using namespace std;

int i, j;

void printans(int ans, int t)
{
    cout << "Case #" << t << ": " << ans << endl;
}

bool pal(long long x)
{
    long long temp = x, cur = 0;
    while (x)
    {
        cur = (cur * 10) + (x % 10);
        x /= 10;
    }
    return temp == cur;
}

void solve(int T)
{
    long long n;
    cin >> n;
    int ans = 0;
    for (i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (pal(i))
            {
                ans++;
            }
            if (i * i != n && (pal(n / i)))
            {
                ans++;
            }
        }
    }
    printans(ans, T);
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
    }
}