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

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void solve(int T)
{
    long long a, b;
    cin >> a >> b;
    if (a == b && a == 1)
        cout << 1 << "\n1 1";
    else if (gcd(a, b) == 1)
        cout << 1 << "\n"
             << a << " " << b;
    else
        cout << 2 << "\n"
             << 1 << " " << b - 1 << "\n"
             << a << " " << b;
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