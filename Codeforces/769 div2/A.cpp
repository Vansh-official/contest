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

int n, m, k, x, y, i, j;
char c;
string s;

void solve(int T)
{
    cin >> n >> s;
    x = y = 0;
    for (i = 0; i < n; i++)
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
    if (x > 1 || y > 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
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