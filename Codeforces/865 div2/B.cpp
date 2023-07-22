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
    i = 2 * n - 1;
    k = 1;
    vector<vector<int>> a(2, vector<int>(n));
    a[1][n - 1] = 2 * n;
    for (i = 0, j = 2 * n - 1; i < n - 1; i++, j--)
        a[i % 2][i] = j;
    for (i = 0, j = n; i < n; i++, j--)
        a[(i + 1) % 2][i] = j;
    for (i = 0; i < n; i++)
        cout << a[0][i] << " ";
    cout << "\n";
    for (i = 0; i < n; i++)
        cout << a[1][i] << " ";
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