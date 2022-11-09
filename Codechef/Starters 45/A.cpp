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

int n, m, p, i, j;
string s;

void solve(int T)
{
    cin >> n;
    vector<int> a(n), b(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    if (a[0] == 0)
    {
        b[0] = 2;
        b[1] = 2;
    }
    else
    {
        b[0] = 1;
        b[1] = 2;
    }
    for (i = 1; i < n - 1; i++)
    {
        if (a[i] == 1)
        {
            if (b[i] == 1)
                b[i + 1] = 2;
            else
                b[i + 1] = 1;
        }
        else
        {
            if (b[i] == 1)
                b[i + 1] = 1;
            else
                b[i + 1] = 2;
        }
    }
    if ((b[n - 1] + b[0]) % 2 == a[n - 1])
        cout << "Yes";
    else
        cout << "No";
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