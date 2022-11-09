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

int n, m, i, j;

void solve(int T)
{
    int q;
    cin >> n >> q;
    vector<int> a(n), ans(n, 0);
    for (i = 0; i < n; i++)
        cin >> a[i];
    int temp = q;
    i = 0;
    while (i < n && temp)
    {
        ans[0]++;
        if (a[i++] > temp)
            temp--;
    }
    for (i = 1; i < n; i++)
    {
    }
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