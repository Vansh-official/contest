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

void printans(int ans, int t, string s)
{
    if (ans == -1)
    {
        cout << "Case #" << t << ": " << s << endl;
    }
    else
    {
        cout << "Case #" << t << ": " << ans << endl;
    }
}

void solve(int T)
{
    string s, p;
    cin >> s >> p;
    int ans = 0;
    for (i = 0, j = 0; i < s.length() && j < p.length();)
    {
        if (s[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
            ans++;
        }
    }
    while (j < p.length())
    {
        j++;
        ans++;
    }
    if (i == s.length())
    {
        printans(ans, T, "a");
    }
    else
    {
        printans(-1, T, "IMPOSSIBLE");
    }
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