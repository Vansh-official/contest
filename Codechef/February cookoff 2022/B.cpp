#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;

int n, m, i, j;

void solve(int T)
{
    int k;
    cin >> n >> k;
    if (n == k)
    {
        for (i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        return;
    }
    cout << n << " ";
    k--;
    for (i = 2; i < n && k > 0; i++, k--)
    {
        cout << i << " ";
    }
    if (i > n)
    {
        return;
    }
    cout << 1 << " ";
    while (i < n)
    {
        cout << i++ << " ";
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