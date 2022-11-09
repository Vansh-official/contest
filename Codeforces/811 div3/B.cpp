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

void solve(int T)
{
    cin >> n;
    vector<int> a(n), count(n + 1, 0);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i]]++;
    }
    int c = 0;
    for (i = 1; i <= n; i++)
        if (count[i] > 1)
            c++;
    for (i = 0; i < n; i++)
    {
        if (!c)
        {
            cout << i;
            return;
        }
        count[a[i]]--;
        if (count[a[i]] == 1)
        {
            c--;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}