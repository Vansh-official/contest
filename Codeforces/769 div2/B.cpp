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

int n, m, k, x, y, i, j;
char c;
string s;

void solve(int T)
{
    cin >> n;
    n--;
    i = 1;
    while (i * 2 <= n)
    {
        i *= 2;
    }
    for (j = 1; j < i; j++)
    {
        cout << j << " ";
    }
    cout << 0 << " ";
    cout << i << " ";
    i++;
    while (i <= n)
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