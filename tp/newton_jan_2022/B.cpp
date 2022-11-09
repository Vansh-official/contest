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
    cin >> n >> k;
    if (n < k)
    {
        cout << -1;
        return;
    }
    if (n > 1 && k == 1)
    {
        cout << -1;
        return;
    }
    if (n == 1)
    {
        cout << "a";
        return;
    }
    if (k == 2)
    {
        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << "a";
            }
            else
            {
                cout << "b";
            }
        }
        return;
    }
    s = "ab";
    for (i = 3; i <= n - k + 2; i++)
    {
        if (i % 2)
        {
            s += "a";
        }
        else
        {
            s += "b";
        }
    }
    for (i = 2; i < k; i++)
    {
        c = 'a' + i;
        s += c;
    }
    cout << s;
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