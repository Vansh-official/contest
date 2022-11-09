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
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << "NO";
    }
    else if (n % 2)
    {
        cout << "YES\n";
        for (int i = 1, j = n; i < j; i++, j--)
        {
            cout << i << " " << j << " ";
        }
        cout << (n / 2) + 1;
    }
    else
    {
        cout << "YES\n";
        cout << n / 2 << " ";
        for (int i = 1; i < n / 2; i++)
        {
            cout << i << " ";
        }
        for (int i = n; i > n / 2; i--)
        {
            cout << i << " ";
        }
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