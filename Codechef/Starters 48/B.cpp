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

void solve(int T)
{
    cin >> n >> m;
    if (n % 2 == 0 && m % 2 == 0)
        cout << 0;
    else if (m % 2 == 0)
        cout << m;
    else if (n % 2 == 0)
        cout << n;
    else
        cout << n + m - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}