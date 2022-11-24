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
string s;

long long modu = 1000000007;

void solve(int T)
{
    long long l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    if (a == b)
        cout << 0;
    else if (abs(a - b) >= x)
        cout << 1;
    else if (abs(a - l) >= x && abs(l - b) >= x)
        cout << 2;
    else if (abs(a - r) >= x && abs(r - b) >= x)
        cout << 2;
    else if (abs(a - l) >= x && abs(l - r) >= x && abs(r - b) >= x)
        cout << 3;
    else if (abs(a - r) >= x && abs(l - r) >= x && abs(l - b) >= x)
        cout << 3;
    else
        cout << -1;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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