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

void count(string s, int ind)
{
    int ans = 0;
    for (int i = ind; i >= 0; i--)
    {
        int x = s[i] - '0';
        x += ans;
        x %= 10;
        if (x == 0)
        {
            continue;
        }
        ans += 10 - x;
    }
    cout << ans << " ";
}

void solve(int T)
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int ans = 0, cur = 0, i = 0;
    while (i < n && s[i] == '0')
    {
        i++;
        ans++;
    }
    if (i == n)
    {
        cout << n;
        return;
    }
    if (ans > 0)
    {
        cur = 10;
    }
    else
    {
        cur = 10 - (s[i] - '0');
    }
    if (cur <= k)
    {
        ans++;
        i++;
    }
    else
    {
        cout << ans;
        return;
    }
    for (; i < n; i++)
    {
        if (s[i] == '0')
        {
            ans++;
            continue;
        }
        if (s[i] < s[i - 1] || (s[i - 1] == '0' && s[i] != '0'))
        {
            cur += 10;
        }
        if (cur > k)
        {
            break;
        }
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