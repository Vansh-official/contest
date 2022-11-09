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
    for (i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    for (i = n; i > 1; i--)
    {
        cout << "\n";
        j = n;
        while (j > i)
        {
            cout << j-- << " ";
        }
        cout << j - 1 << " " << j << " ";
        j -= 2;
        while (j >= 1)
        {
            cout << j-- << " ";
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