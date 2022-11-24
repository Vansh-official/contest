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
    cin >> s;
    n = s.length();
    int a = 0, b = 0;
    for (i = 0; i < n; i++)
        if (i < n - 1 && s[i] == '1' && s[i + 1] == '0')
            a++;
        else if (i < n - 1 && s[i] == '0' && s[i + 1] == '1')
            b++;
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        if (i < n - 1 && i > 0 && a == b)
            ans++;
        else if (i == 0 && s[i] != s[i + 1])
        {
            if (s[i] == '1' && a - 1 == b)
                ans++;
            else if (s[i] == '0' && a == b - 1)
                ans++;
        }
        else if (i == 0 && s[i] == s[i + 1])
        {
            if (s[i] == '0' && a + 1 == b)
                ans++;
            else if (s[i] == '1' && a == b + 1)
                ans++;
        }
        else if (i == n - 1 && s[i] != s[i - 1])
        {
            if (s[i] == '0' && a - 1 == b)
                ans++;
            else if (s[i] == '1' && a == b - 1)
                ans++;
        }
        else if (i == n - 1 && s[i] == s[i - 1])
        {
            if (s[i] == '1' && a + 1 == b)
                ans++;
            else if (s[i] == '0' && a == b + 1)
                ans++;
        }
    }
    cout << ans;
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