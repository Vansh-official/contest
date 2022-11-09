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

int n, m, i, j;
bool dun;

int calc[100001];

void printans(int ans, int t)
{
    cout << "Case #" << t << ": " << ans << endl;
}

void solve(int T)
{
    cin >> n >> m;
    printans(calc[m] - calc[n - 1], T);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    calc[0] = 0;
    for (i = 1; i <= 100000; i++)
    {
        calc[i] = calc[i - 1];
        int x = i, pro = 1, sum = 0;
        while (x)
        {
            j = x % 10;
            x /= 10;
            pro *= j;
            sum += j;
        }
        if (pro % sum == 0)
        {
            calc[i]++;
        }
    }
    for (int p = 1; p <= t; p++)
    {
        solve(p);
    }
}