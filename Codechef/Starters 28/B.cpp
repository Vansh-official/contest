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
    cin >> n;
    if (n == 2)
    {
        cout << -1;
    }
    else if (n % 2)
    {
        for (i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        for (i = 1; i <= n - 3; i++)
        {
            cout << i << " ";
        }
        cout << n << " " << n - 2 << " " << n - 1;
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