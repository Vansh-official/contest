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
    string s;
    cin >> s;
    int r = 0, g = 0, b = 0;
    for (i = 0; i < 6; i++)
    {
        if (s[i] == 'r')
        {
            r = 1;
        }
        else if (s[i] == 'g')
        {
            g = 1;
        }
        else if (s[i] == 'b')
        {
            b = 1;
        }
        else if (s[i] == 'R' && r == 0)
        {
            cout << "NO";
            return;
        }
        else if (s[i] == 'G' && g == 0)
        {
            cout << "NO";
            return;
        }
        else if (s[i] == 'B' && b == 0)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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