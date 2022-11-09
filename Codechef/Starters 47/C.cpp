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

int n, m, i, j;

void solve(int T)
{
    string s;
    cin >> n >> s;
    i = n;
    int last = -1;
    while (i > 0)
    {
        if (i % 2 && last == 0)
        {
            cout << "NO";
            return;
        }
        else if (i % 2)
        {
            i--;
            last = 0;
        }
        else if (s.substr(0, i / 2) == s.substr(i / 2, i / 2))
        {
            i /= 2;
            last = 1;
        }
        else if (last == 0)
        {
            cout << "NO";
            return;
        }
        else
        {
            i--;
            last = 0;
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

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}