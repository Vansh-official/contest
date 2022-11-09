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
#include <stack>

using namespace std;

void solve(int T)
{
    int n, a, b;
    cin >> n >> a >> b;
    if (((n % 2) && (max(a, b) > n / 2)) || (n % 2 == 0 && min(a, b) > (n / 2) - 1))
    {
        cout << -1;
        return;
    }
    else
    {
        if (a > (n - 1) / 2 || b > (n - 1) / 2)
        {
            cout << -1;
            return;
        }
    }
    if (abs(b - a) > 1)
    {
        cout << -1;
        return;
    }
    if (a == b && a == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        return;
    }
    vector<int> ans(n);
    int c = 0;
    if (a == b)
    {
        int x = a + 1;
        x *= 2;
        for (int i = 1, j = x; i < j; i++, j--)
        {
            ans[c++] = i;
            ans[c++] = j;
        }
        for (int i = x + 1; i <= n; i++)
        {
            ans[c] = i;
        }
    }
    else if (a > b)
    {
        int x = a * 2;
        x++;
        x = n - x + 1;
        int i = x, j = n;
        for (; i < j; i++, j--)
        {
            ans[c++] = i;
            ans[c++] = j;
        }
        ans[c++] = i;
        for (i = x - 1; i >= 1; i--)
        {
            ans[c++] = i;
        }
    }
    else
    {
        int x = b * 2;
        x++;
        int j = x, i = 1;
        for (; i < j; i++, j--)
        {
            ans[c++] = j;
            ans[c++] = i;
        }
        ans[c++] = j;
        for (i = x + 1; i <= n; i++)
        {
            ans[c++] = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
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