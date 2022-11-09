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
    int l, r, k;
    cin >> l >> r >> k;
    if (r == l)
    {
        if (r == 1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        return;
    }
    if (l == 1)
    {
        l++;
        k--;
    }
    int x = r - l + 1, y = ceil((double)x / 2), z = x / 2;
    if (l % 2 == 1 && k >= y)
    {
        cout << "YES";
    }
    else if (l % 2 == 0 && k >= z)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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