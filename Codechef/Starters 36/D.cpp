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
#include <iomanip>

using namespace std;

void solve(int T)
{
    long long n, c, two = 2, count = 0;
    cin >> n;
    if (n % two)
    {
        cout << 1;
        return;
    }
    while (n % two == 0)
    {
        n /= two;
        count++;
    }
    c = findNthRoot(n, count);
    if (count % two)
    {
        cout << -1;
    }
    else if (n == 1 || c * c == n)
    {
        cout << 1;
    }
    else
    {
        cout << 2;
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
        solve(i);
        cout << "\n";
    }
}