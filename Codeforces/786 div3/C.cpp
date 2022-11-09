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

int n, m, k, i, j;

void solve(int T)
{
    string s, t;
    cin >> s >> t;
    n = s.length();
    m = t.length();
    j = 0;
    for (i = 0; i < m; i++)
        if (t[i] == 'a')
            j++;
    if (j == m && m == 1)
        cout << 1;
    else if (j)
        cout << -1;
    else
        cout << (long long)pow((long long)2, (long long)n);
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