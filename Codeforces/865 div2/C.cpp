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

void solve(int T)
{
    cin >> n;
    vector<long long> a(n), b;
    for (i = 0; i < n; i++)
        cin >> a[i];
    b = a;
    a[n - 2] += INT_MAX - a[n - 1];
    a[n - 1] = INT_MAX;
    for (i = n - 2; i; i--)
    {
        if (a[i] > a[i + 1])
        {
            long long x = a[i] - a[i + 1];
            a[i] -= x;
            a[i - 1] -= x;
        }
        else if (a[i] < a[i + 1])
        {
            long long x = a[i + 1] - a[i];
            a[i] += x;
            a[i - 1] += x;
        }
    }
    b[1] -= b[0] - INT_MIN;
    b[0] = INT_MIN;
    for (i = 1; i < n - 1; i++)
    {
        if (b[i] > b[i - 1])
        {
            long long x = b[i] - b[i - 1];
            b[i] -= x;
            b[i + 1] -= x;
        }
        else if (b[i] < b[i - 1])
        {
            long long x = b[i - 1] - b[i];
            b[i] += x;
            b[i + 1] += x;
        }
    }
    bool f = 1, g = 1;
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            f = 0;
        if (b[i] > b[i + 1])
            g = 0;
    }
    if (f || g)
        cout << "YES";
    else
        cout << "NO";
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