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
#include <climits>

using namespace std;

int n, m, i, j;

void solve(int T)
{
    string s;
    cin >> n >> s;
    int z = 0, ans = 0;
    vector<pair<int, int>> p;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            z++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (s[i] == '1' && z > 0)
        {
            ans++;
            z = 0;
            p.push_back({i + 1, n - i});
            for (j = i + 1; j < n; j++)
            {
                if (s[j] == '0')
                {
                    s[j] = '1';
                }
                else
                {
                    s[j] = '0';
                    z++;
                }
            }
        }
        else if (s[i] == '0')
        {
            z--;
        }
    }
    cout << ans;
    for (i = 0; i < ans; i++)
    {
        cout << "\n"
             << p[i].first << " " << p[i].second;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
        cout << "\n";
    }
}