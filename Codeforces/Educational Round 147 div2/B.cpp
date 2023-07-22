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

long long M = 1000000007;

void solve(int T)
{
    cin >> n;
    vector<int> a(n), b(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        cin >> b[i];
    int x = -1, y = -1;
    for (i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (x == -1)
                x = i;
            y = i;
        }
    }
    while (x > 0 && b[x - 1] <= b[x])
        x--;
    while (y < n - 1 && b[y] <= b[y + 1])
        y++;
    cout << x + 1 << " " << y + 1;
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
        cout << "\n";
    }
}