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
vector<int> sq;

void rec(vector<int> &a, int x)
{
    if (x < 0)
        return;
    /*if (sqrt(x) * sqrt(x) == x)
    {
        a[0] = 0;
        for (i = 1, j = x - 1; i < x; i++, j--)
            a[i] = j;
        ind = i;
        return;
    }
    if (sqrt(x + 1) * sqrt(x + 1) == x + 1)
    {
        a[0] = 1;
        a[1] = 0;
        for (i = 2, j = x - 1; i < x; i++, j--)
            a[i] = j;
        ind = i;
        return;
    }
    if (sqrt(x - 1) * sqrt(x - 1) == x - 1)
    {
        for (i = 0, j = x - 1; i < x; i++, j--)
            a[i] = j;
        ind = i;
        return;
    }*/

    int ans = sqrt(2 * x);
    ans *= ans;
    ans -= x;
    rec(a, ans - 1);
    for (i = ans, j = x; i <= x; i++, j--)
        a[i] = j;
    return;
}

void solve(int T)
{
    cin >> n;
    vector<int> a(n);
    rec(a, n - 1);
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (i = 1; i * i <= 200000; i++)
        sq.push_back(i * i);
    sort(sq.begin(), sq.end());

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}