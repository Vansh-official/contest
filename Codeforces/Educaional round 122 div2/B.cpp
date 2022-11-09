#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <climits>

using namespace std;

int n, m, k, x, y, i, j;
char c;
string s;

void solve(int T)
{
    string s;
    cin >> s;
    x = y = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if (min(x, y) == 0)
    {
        cout << 0;
    }
    else if (x == y && x == 1)
    {
        cout << 0;
    }
    else if (x == y)
    {
        cout << x - 1;
    }
    else
    {
        cout << min(x, y);
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