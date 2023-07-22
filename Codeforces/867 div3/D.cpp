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
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return;
    }
    if (n % 2)
    {
        cout << -1;
        return;
    }
    i = 0, j = n - 1, k = 0;
    int ind = 0, curs = 0;
    vector<int> ans(n, -1);
    while (i < j)
    {
        ans[ind] = (n + i - curs) % n;
        if (!ans[ind])
            ans[ind] = n;
        curs = (curs + ans[ind++]) % n;
        ans[ind] = (n + j - curs) % n;
        if (!ans[ind])
            ans[ind] = n;
        curs = (curs + ans[ind++] % n);
        i++;
        j--;
    }
    for (i = 0; i < n; i++)
        cout << ans[i] << " ";
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