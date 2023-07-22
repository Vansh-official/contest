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

void solve(int T)
{
    int x1, x2, y1, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    x2 = min(x2, n - x2 + 1);
    y2 = min(y2, n - y2 + 1);
    x1 = min(x1, n - x1 + 1);
    y1 = min(y1, n - y1 + 1);
    int cb1 = min(x1, y1), cb2 = min(x2, y2);
    cout << abs(cb1 - cb2);
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