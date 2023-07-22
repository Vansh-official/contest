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

long long modu = 1000000007;

void solve(int T)
{
    int k;
    cin >> n >> k;
    k = (n * (n + 1) / 2) - k;
    vector<int> ans(n);
    for (i = 0; i < n; i++)
    {
        if (!k)
        {
            ans[i] = 1000;
            continue;
        }
        if (i + 1 <= k)
        {
            k -= i + 1;
            ans[i] = -2;
            continue;
        }
        ans[i] = 2 * (i - k) + 1;
        k = 0;
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
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}