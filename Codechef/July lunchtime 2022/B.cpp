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

void solve(int T)
{
    cin >> n;
    vector<long long> a(n), b(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (i = 0; i < n / 2; i++)
        a[i] += b[i];
    for (i = n / 2, j = n - 1; i < n; i++, j--)
        a[i] += b[j];

    sort(a.begin(), a.end());
    cout << a[n / 2];
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