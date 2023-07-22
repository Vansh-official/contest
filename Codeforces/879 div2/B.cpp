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
string s, p;
long long M = 1000000007;

void solve(int T)
{
    long long peep, gold, silver;
    cin >> peep >> gold >> silver;
    long long x = (silver - 1) / 2;
    if (peep * x >= gold * silver)
        cout << gold * silver;
    else
    {
        x = (gold * silver) - ((peep - 1) * x);
        long long y = x % silver;
        if (y >= (silver + 1) / 2)
            x += silver - y;
        else
            x -= y;
        cout << (gold * silver) - x;
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