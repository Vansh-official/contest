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
#include <stack>

using namespace std;

void solve(int T)
{
    string s;
    cin >> s;
    int ind = s.length() - 2, z;
    for (; ind >= 0; ind--)
    {
        z = (s[ind] - '0') + (s[ind + 1] - '0');
        if (z / 10)
        {
            break;
        }
    }
    if (ind == -1)
    {
        z = (s[0] - '0') + (s[1] - '0');
        cout << z;
        for (int i = 2; i < s.length(); i++)
        {
            cout << s[i];
        }
    }
    else
    {
        for (int i = 0; i < ind; i++)
        {
            cout << s[i];
        }
        cout << z;
        for (int i = ind + 2; i < s.length(); i++)
        {
            cout << s[i];
        }
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
        solve(t);
        cout << "\n";
    }
}