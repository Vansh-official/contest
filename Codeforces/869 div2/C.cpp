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

int n, m, i, j, k;
string s;
long long M = 1000000007;

void solve(int T)
{
    cin >> n >> m;
    vector<long long> a(n), b(n + 1, 0);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 2; i < n; i++)
    {
        b[i] = b[i - 1];
        if (a[i - 1] <= a[i - 2] && a[i - 1] >= a[i])
            b[i]++;
    }
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        if (r - l + 1 < 3)
            cout << r - l + 1;
        else
            cout << r - l + 1 - b[r - 1] + b[l];
        cout << "\n";
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
    t = 1;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}