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

int n, m, i, j, k;
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n;
    long long x = n, y = 2 * ((2 * x) + 1);
    if ((y - x + 1) % 2)
    {
        cout << "No\n";
        return;
    }
    x = (y - x + 1) / 2;
    cout << "Yes\n";
    for (i = 1, j = x - 1, m = 0; i < j; i += 2, j--, x++, m++)
        cout << i << " " << j << "\n";
    j = 2 * n;
    while (m < n)
    {
        cout << x - j << " " << j << "\n";
        x++;
        m++;
        j--;
    }
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
    }
}