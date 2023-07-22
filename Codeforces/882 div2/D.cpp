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

int n, m, q, i, j, k;
string s;
long long M = 1000000007;

void solve(int T)
{
    cin >> n >> m >> q >> s;
    vector<int> count(n + 2, 0);
    vector<vector<int>> a(n, vector<int>(2));
    for (i = 0; i < m; i++)
    {
        cin >> a[i][0] >> a[i][1];
        count[a[i][0]]++;
        count[a[i][1] + 1]--;
    }
    int total = 0;
    for (i = 2; i <= n; i++)
        count[i] += count[i - 1];
    for (i = 1; i <= n; i++)
    {
        if (count[i])
            count[i] = 1;
        if (count[i] && s[i - 1] == '0')
            total++;
    }
    while (q--)
    {
        cin >> i;
        if (s[i - 1] == '1')
            s[i - 1] = '0';
        else
            s[i - 1] = '1';
        if (count[i] && s[i - 1] == '1')
            total--;
        else if (count[i] && s[i - 1] == '0')
            total++;
        cout << total << "\n";
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
        // cout << "\n";
    }
}