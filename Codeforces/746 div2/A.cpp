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
    int n, h;
    cin >> n >> h;
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        swap(a, b);
    }
    for (int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;
        if (x > b)
        {
            a = b;
            b = x;
        }
        else if (x > a)
        {
            a = x;
        }
    }
    int x = a + b;
    int ans = h / x;
    h = h % x;
    ans *= 2;
    if (h > 0)
    {
        h -= b;
        ans++;
    }
    if (h > 0)
    {
        h -= a;
        ans++;
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