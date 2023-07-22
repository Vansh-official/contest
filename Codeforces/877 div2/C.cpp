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
#include <sstream>
#include <tuple>
#include <iomanip>

using namespace std;

int n, m, i, j;
string s;
long long M = 1000000007;

int count(vector<int> &a, int x)
{
    set<int> arr;
    for (i = 0; i < n; i++)
        arr.insert(i + 1);
    int ret = 0;
    if (x == 1)
    {
        for (i = 0; i < n; i++)
        {
            arr.erase(a[i]);
            if (!arr.size() || *arr.begin() == i + 2)
                ret++;
        }
    }
    else
    {
        for (i = n - 1; i >= 0; i--)
        {
            arr.erase(a[i]);
            if (!arr.size() || *arr.begin() == n - i + 1)
                ret++;
        }
    }
    return ret;
}

void solve(int T)
{
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    int x, y;
    for (i = 0; i < n; i++)
        if (a[i] == 1)
            x = i + 1;
        else if (a[i] == 2)
            y = i + 1;
    if ((x == 1 && y == n) || (x == n && y == 1))
        cout << 1 << " " << 1;
    else if (x == 1)
        cout << y << " " << n;
    else if (x == n)
        cout << y << " " << 1;
    else if (y == 1)
        cout << x << " " << n;
    else if (y == n)
        cout << x << " " << 1;
    else
    {
        int p, q, r, t, ans, val = INT_MAX;
        swap(a[0], a[x - 1]);
        p = count(a, 1);
        swap(a[0], a[x - 1]);
        swap(a[n - 1], a[x - 1]);
        q = count(a, n);
        swap(a[n - 1], a[x - 1]);
        swap(a[0], a[y - 1]);
        r = count(a, 1);
        swap(a[0], a[y - 1]);
        swap(a[n - 1], a[y - 1]);
        t = count(a, n);
        swap(a[n - 1], a[y - 1]);
        if (p < val)
            ans = 0, val = p;
        if (q < val)
            ans = 1, val = q;
        if (r < val)
            ans = 2, val = r;
        if (t < val)
            ans = 3, val = t;
        if (ans == 0)
            cout << 1 << " " << x;
        else if (ans == 1)
            cout << n << " " << x;
        else if (ans == 2)
            cout << 1 << " " << y;
        else
            cout << n << " " << y;
    }
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}