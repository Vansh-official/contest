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

int n, m, k, i, j, x;

void solve(int T)
{
    cin >> n;
    vector<int> a(n), b(n, 0);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < i + 1)
            b[i] = 1;
    }
    priority_queue<int> p;
    long long ans = 0, cur = 0;
    for (i = n - 1; i >= 0; i--)
    {
        while (!p.empty() && p.top() > i + 1)
        {
            cur++;
            p.pop();
        }
        if (b[i])
        {
            ans += cur;
            p.push(a[i]);
        }
    }
    cout << ans;
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