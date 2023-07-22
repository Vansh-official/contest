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
    cin >> s;
    n = s.length();
    int ans = 1;
    if (s[0] == '0')
    {
        cout << 0;
        return;
    }
    if (s[0] == '?')
        ans *= 9;
    for (i = 1; i < n; i++)
        if (s[i] == '?')
            ans *= 10;
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