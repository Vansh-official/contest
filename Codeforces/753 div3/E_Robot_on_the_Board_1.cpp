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
    string s;
    int n, m;
    cin >> n >> m >> s;
    int xi = 1, yi = 1, xcur = 1, ycur = 1, rm = 0, dm = 0;
    for (int i = 0; i < s.length(); i++)
    {
        rm = max(rm, ycur - yi);
        dm = max(dm, xcur - xi);
        if (s[i] == 'U')
        {
            xcur--;
        }
        else if (s[i] == 'D')
        {
            xcur++;
        }
        else if (s[i] == 'L')
        {
            ycur--;
        }
        else
        {
            ycur++;
        }
        if (xcur > n || ycur > m)
        {
            break;
        }
        if (xcur < 1)
        {
            if (xi == n || (n - xi) <= dm)
            {
                break;
            }
            xi++;
            xcur++;
        }
        if (ycur < 1)
        {
            if (yi == m || (m - yi) <= rm)
            {
                break;
            }
            yi++;
            ycur++;
        }
    }
    cout << xi << " " << yi;
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