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
    long long n, m;
    cin >> n >> m;
    string s;
    if (n > m)
    {
        s = "01";
    }
    else
    {
        s = "10";
    }
    while (n > 0 || m > 0)
    {
        if (s[s.length() - 1] == '1')
        {
            if (n > 0)
            {
                s += "0";
                n--;
            }
            else
            {
                s += "10";
            }
        }
        else
        {
            if (m > 0)
            {
                s += "1";
                m--;
            }
            else
            {
                s += "01";
            }
        }
    }
    cout << s.length() << "\n"
         << s;
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