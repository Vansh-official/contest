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
string s;

long long modu = 1000000007;

void solve(int T)
{
    long long x, y;
    cin >> x >> y;
    long long a = 0, b = 0, temp = x, ans = 1;
    while (temp % 2 == 0)
    {
        temp /= 2;
        a++;
    }
    while (temp % 5 == 0)
    {
        temp /= 5;
        b++;;
    }
    if (a > b)
    {
        ans = pow(5ll, a - b);
        while (ans > y)
            ans /= 5ll;
    }
    else if (b > a)
    {
        ans = pow(2ll, b - a);
        while (ans > y)
            ans /= 2ll;
    }
    while (ans * 10 <= y)
        ans *= 10;
    for (temp = 9; temp > 0; temp--)
        if (ans * temp <= y)
        {
            ans *= temp;
            break;
        }
    cout << ans * x;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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