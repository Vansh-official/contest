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
    if (n % 2)
    {
        cout << -1;
    }
    else
    {
        cout << 0 << " " << n / 2 << "\n";
        cout << n / 2 << " " << 0 << "\n";
        cout << -n / 2 << " " << 0 << "\n";
        cout << 0 << " " << -n / 2 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
    }
}