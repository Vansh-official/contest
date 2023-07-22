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
    cin >> n >> k;
    vector<bool> a;
    for (i = 1; i <= n; i *= 2)
        if ((i & n) != 0)
            a.push_back(1);
        else
            a.push_back(0);
    reverse(a.begin(), a.end());
    long long pow[63];
    pow[0] = 1;
    for (i = 1; i < 63; i++)
        pow[i] = 2ll * pow[i - 1];
    long long ans = 0;
    if (k < a.size())
    {
        cout << pow[k];
        return;
    }
    for (i = 0; i < a.size(); i++)
        if (a[i])
            ans += pow[a.size() - i - 1];
    cout << ans + 1;
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