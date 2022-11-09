#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

void solve(int T)
{
    int n, k;
    cin >> n >> k;
    if (k == n - 1)
    {
        cout << -1;
        return;
    }
    for (int i = 1; i <= k; i++)
    {
        cout << i << " ";
    }
    if (k == n)
    {
        return;
    }
    for (int i = k + 2; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << k + 1;
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