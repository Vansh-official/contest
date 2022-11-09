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
    cin >> n >> k >> s;
    int x = 0, y = 0;
    for (i = 0; i < n; i++)
        if (s[i] == '1')
            x++;
        else
            y++;
    cout << (abs(x - y) / k) + min((abs(x - y) % k), 1);
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