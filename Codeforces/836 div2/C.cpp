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

int n, m, i, j, k;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n >> j;
    if (j == n)
    {
        cout << n << " ";
        for (i = 2; i < n; i++)
            cout << i << " ";
        cout << 1;
    }
    else if (n % j == 0)
    {
        vector<int> ans(n, -1);
        ans[0] = j;
        ans[n - 1] = 1;
        ans[j-1]=n;
        while (1) {
            bool flag = 0;
            for (i = 2 * j; i < n; i += j)
            {
                if (n % i == 0)
                {
                    ans[i - 1] = n;
                    ans[j - 1] = i;
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                ans[j - 1] = n;
                break;
            }
            j = i;
        }
        for (i = 0; i < n; i++)
            if (ans[i] != -1)
                cout << ans[i] << " ";
            else
                cout << i + 1 << " ";
    }
    else
        cout << -1;
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