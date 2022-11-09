#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <iomanip>
#include <queue>

using namespace std;

int n, m, i, j, k;

void printans(double ans, int t)
{
    cout << "Case #" << t << ": " << fixed << setprecision(6) << ans << endl;
}

void solve(int T)
{
    cin >> n >> m;
    vector<long long> a(n);
    double ans = 0;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (i = n - 1; i >= 0; i--)
    {
        if (m == 1)
        {
            if ((i + 1) % 2)
            {
                ans += a[(i + 1) / 2];
            }
            else
            {
                double x = a[i / 2] + a[i / 2 + 1];
                x /= 2;
                ans += x;
            }
            break;
        }
        ans += a[i];
        m--;
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