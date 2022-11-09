#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <climits>

using namespace std;

int n, m, k, x, y, i, j;
char c;
string s;

void solve(int T)
{
    cin >> n;
    m = n;
    x = n % 10;
    y = x;
    while (x <= 9)
    {
        if (m % 7 == 0)
        {
            cout << m;
            return;
        }
        x++;
        m++;
    }
    m = n;
    x = y;
    while (x >= 0)
    {
        if (m % 7 == 0)
        {
            cout << m;
            return;
        }
        x--;
        m--;
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