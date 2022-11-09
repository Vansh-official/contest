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
#include <tuple>
#include <stack>
#include <climits>

using namespace std;

void solve(int T)
{
    int n, x, y;
    cin >> n >> x >> y;
    int mx = (n + 1) / 2, my = (n + 1) / 2;
    x = abs(mx - x);
    y = abs(my - y);
    x = abs(x - y);
    if (x % 2)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}

int main()
{
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