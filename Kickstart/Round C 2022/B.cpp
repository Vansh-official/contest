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

long long n, m, i, j;

void printans(string ans, int t)
{
    cout << "Case #" << t << ": " << ans << "\n";
}

void solve(int T)
{
    long long x, y, sum = 0;
    cin >> n >> x >> y;
    sum = n * (n + 1);
    sum /= 2;
    if (sum % (x + y))
    {
        printans("IMPOSSIBLE", T);
        return;
    }
    vector<long long> a;
    x *= sum / (x + y);
    for (i = n; i > 0; i--)
    {
        if (x - i >= 0)
        {
            x -= i;
            a.push_back(i);
        }
    }
    printans("POSSIBLE", T);
    cout << a.size() << "\n";
    for (int p = 0; p < a.size(); p++)
        cout << a[p] << " ";
    cout << "\n";
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