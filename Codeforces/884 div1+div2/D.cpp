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

#define rep(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define irep(a, b, c) for (int(a) = (b); (a) >= (c); --(a))

void solve(int T)
{
    cin >> n;
    int val;
    for (i = 2; i <= n; i++)
    {
        if (n % i)
        {
            val = i;
            break;
        }
    }
    for (i = 0, j = 0; i < n; i++, j++)
        cout << (char)('a' + (j % val));
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