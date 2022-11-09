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

int n, m, k, i, j;

void solve(int T)
{
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '0' && s[i + 1] == '0')
        {
            ans += 2;
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
        {
            ans++;
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