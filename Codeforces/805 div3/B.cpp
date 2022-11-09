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
    cin >> s;
    n = s.length();
    int ans = 0;
    for (i = 0; i < n;)
    {
        ans++;
        set<char> a;
        while (i < n)
        {
            a.insert(s[i++]);
            if (a.size() > 3)
            {
                i--;
                break;
            }
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

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}