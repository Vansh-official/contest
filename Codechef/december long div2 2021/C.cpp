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

void solve(int T)
{
    int n;
    string s;
    cin >> n >> s;
    string ans = s;
    for (int i = n - 2; i >= 0; i--)
    {
        char c = s[i + 1];
        if (c == 'R' && s[i] == 'P')
        {
            c = s[i];
        }
        else if (c == 'P' && s[i] == 'S')
        {
            c = s[i];
        }
        else if (c == 'S' && s[i] == 'R')
        {
            c = s[i];
        }
        else
        {
            ans[i] = ans[i + 1];
            continue;
        }
        for (int j = i + 2; j < n; j++)
        {
            if (c == 'R' && s[j] == 'P')
            {
                c = s[j];
            }
            else if (c == 'P' && s[j] == 'S')
            {
                c = s[j];
            }
            else if (c == 'S' && s[j] == 'R')
            {
                c = s[j];
            }
        }
        ans[i] = c;
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