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
#include <tuple>
#include <stack>
#include <climits>

using namespace std;

void solve(int T)
{
    int n, m;
    cin >> n >> m;
    int count = 0;

    for (int i = 2; i <= sqrt(m) && m > 1; i++)
    {
        if (m % i == 0)
        {
            while (m % i == 0)
            {
                m /= i;
            }
            count++;
        }
    }
    if (m >= 2)
    {
        count++;
    }
    int ans = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0 && n / i <= count)
        {
            ans = max(ans, n / i);
        }
        if (n % i == 0 && i <= count)
        {
            ans = max(ans, i);
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