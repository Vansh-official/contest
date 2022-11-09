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

int n, m, i, j, k;
string s;

void solve(int T)
{
    cin >> n;
    vector<int> a(n);
    a[n - 1] = n;
    a[0] = n - 1;
    a[1] = n - 2;
    if (n > 3)
    {
        m = n - 3;
        for (i = n - 2; i > 1; i--)
            a[i] = m--;
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
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