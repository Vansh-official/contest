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

int n, m, i, j;
string s;
long long M = 1000000007;

long long fib[46];

void solve(int T)
{
    long long x, y;
    cin >> n >> x >> y;
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

    fib[0] = fib[1] = 1;
    for (i = 2; i <= 45; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}