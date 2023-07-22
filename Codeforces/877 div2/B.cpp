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

bool notPrime(int x)
{
    for (i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 1;
    return 0;
}

void solve(int T)
{
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    if (n % 2 == 0)
    {
        int x = 1;
        for (j = 0; j < m; j++)
            for (i = 0; i < n; i++)
                a[i][j] = x++;
    }
    else if (m % 2 == 0)
    {
        int x = 1;
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                a[i][j] = x++;
    }
    else
    {
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
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}