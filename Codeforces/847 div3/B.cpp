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
    vector<vector<int>> a(n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1; j++)
        {
            cin >> m;
            a[i].push_back(m);
        }
    vector<int> ans;
    int x = a[0][0], y = 1;
    for (i = 1; i < n; i++)
        if (a[i][0] == x)
            y++;
    if (y > 1)
    {
        cout << x << " ";
        for (i = 0; i < n; i++)
            if (a[i][0] != x)
            {
                for (j = 0; j < n - 1; j++)
                    cout << a[i][j] << " ";
                return;
            }
    }
    else
    {
        cout << a[1][0] << " ";
        for (i = 0; i < n - 1; i++)
            cout << a[0][i] << " ";
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
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}