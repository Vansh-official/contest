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

int n, m, k, i, j, x;

void solve(int T)
{
    string s;
    cin >> n >> s;
    int ans = 0, zc = 0;
    for (i = 0; i < n; i++)
    {
        while (i < n - 1 && s[i] == s[i + 1])
            i++;
        if (s[i] == '0')
            zc++;
    }
    for (i = 0; i < n; i++)
    {
        while (i < n - 1 && s[i] == s[i + 1])
            i++;
        if (s[i] == '0')
            zc--;
        else if (zc > 0)
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

    for (int q = 1; q <= t; q++)
    {
        solve(q);
        cout << "\n";
    }
}