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
#include <stack>
#include <climits>

using namespace std;

void solve(int T)
{
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;
    // cout << n << " " << m << " " << rb << " " << cb << " " << rd << " " << cd << "\n";
    int ans = 0;
    if (rb == rd)
    {
        ans = 0;
    }
    else if (rd > rb)
    {
        ans = rd - rb;
    }
    else if (rb > rd)
    {
        ans = 2 * (n - rb) + rb - rd;
    }
    if (cb == cd)
    {
        ans = 0;
    }
    else if (cd > cb)
    {
        ans = min(ans, cd - cb);
    }
    else if (cb > cd)
    {
        ans = min(ans, 2 * (m - cb) + cb - cd);
    }
    cout << ans;
}

int main()
{
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