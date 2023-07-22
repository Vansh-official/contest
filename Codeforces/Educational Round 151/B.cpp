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

long long M = 1000000007;

void solve(int T)
{
    long long xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    long long ans = 1;
    if (xa <= xb && xa <= xc)
        ans += min(xb, xc) - xa;
    else if (xa >= xb && xa >= xc)
        ans += xa - max(xb, xc);
    if (ya <= yb && ya <= yc)
        ans += min(yb, yc) - ya;
    else if (ya >= yb && ya >= yc)
        ans += ya - max(yb, yc);
    cout << ans;
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
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}