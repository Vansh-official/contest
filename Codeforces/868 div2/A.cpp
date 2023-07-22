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
    for (i = 0; i <= n; i++)
    {
        int x = i * (i - 1) / 2;
        int y = (n - i) * (n - i - 1) / 2;
        if (x + y == k)
        {
            cout << "YES\n";
            for (j = 0; j < i; j++)
                cout << 1 << " ";
            for (j = i; j < n; j++)
                cout << -1 << " ";
            return;
        }
    }
    cout << "NO";
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