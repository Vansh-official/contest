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

void printans(string ans, int t)
{
    cout << "Case #" << t << ": " << ans << endl;
}

void solve(int T)
{
    string s, ans = "";
    cin >> s;
    n = s.length();
    long long x = 0;
    for (i = 0; i < n; i++)
    {
        x += (s[i] - '0');
    }
    x %= 9;
    x = 9 - x;
    char c;
    if (x == 9)
    {
        ans += s[0];
        ans += '0';
        for (i = 1; i < n; i++)
        {
            ans += s[i];
        }
        printans(ans, T);
        return;
    }
    else
    {
        c = '0' + x;
    }
    bool dun = 0;
    for (i = 0; i < n; i++)
    {
        if (!dun && s[i] > c)
        {
            ans += c;
            dun = 1;
        }
        ans += s[i];
    }
    if (!dun)
    {
        ans += c;
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