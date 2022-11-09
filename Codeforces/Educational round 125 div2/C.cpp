#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <climits>
#include <numeric>
#include <random>

using namespace std;

int n, m, k, q, i, j;

void solve(int T)
{
    string s;
    cin >> n >> s;
    int ans = 0, last = 0;
    for (i = 0; i < n - 1; i++)
    {
        last = i;
        if (s[i] == s[i + 1] || s[i] == '(')
        {
            i++;
            ans++;
            last = i + 1;
        }
        else
        {
            i += 2;
            while (i < n && s[i] != ')')
            {
                i++;
            }
            if (i < n && s[i] == ')')
            {
                ans++;
                last = i + 1;
            }
        }
    }
    cout << ans << " " << n - last;
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