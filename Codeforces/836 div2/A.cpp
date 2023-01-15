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
    cin >> n;
    vector<int> ans;
    if (n % 2)
        for (i = 0; i < n; i++)
            cout << 1 << " ";
    else
    {
        for (i = 0; i < n - 2; i++)
            cout << 1 << " ";
        for (i = 1; i <= n * n; i++)
            if ((i ^ (2 * n - 2 - i)) == 3)
            {
                cout << i << " " << 2 * n - 2 - i;
                return;
            }
    }
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