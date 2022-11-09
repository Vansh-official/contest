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
    vector<int> a(n, 0);
    for (i = 0; i < n; i++)
    {
        cin >> j;
        a[j - 1]++;
    }
    sort(a.begin(), a.end());
    while (a[n - 1] > 0 && a[n - 1] > a[n - 2] && a[0] < a[n - 1])
    {
        a[n - 1]--;
        a[0]++;
    }

    sort(a.begin(), a.end());
    cout << a[n - 1];
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