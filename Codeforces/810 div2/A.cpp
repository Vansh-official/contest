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

void solve(int T)
{
    cin >> n;
    vector<int> ans(n);
    for (i = n; i >= 2; i -= 2)
    {
        ans[i - 1] = i - 1;
        ans[i - 2] = i;
    }
    if (i == 1)
        ans[i - 1] = i;
    for (i = 0; i < n; i++)
        cout << ans[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}