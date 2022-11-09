#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;

int n, m, i, j;

void solve(int T)
{
    string s, f;
    cin >> s;
    f = s;
    reverse(f.begin(), f.end());
    n = s.length();
    long long ans = 0;
    for (i = 0, j = 0; i < n;)
    {
        if (s[i] != f[j])
        {
            ans++;
            s += s[i];
            i++;
        }
        else
        {
            i++;
            j++;
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