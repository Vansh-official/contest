#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <queue>
#include <numeric>

using namespace std;

void solve(int T)
{
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << (n - 1) * 2;
        return;
    }
    int ans = (n - k) * 2;
    if (k % 2)
    {
        ans += ((k / 2) * 2);
    }
    else
    {
        ans += (k - 1 - (k / 2)) * 2;
    }
    cout << ans;
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