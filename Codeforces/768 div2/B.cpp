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

int n, x, y, i, j;
char c;
string s;

void solve(int T)
{
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    x = arr[n - 1];
    y = 1;
    int ans = 0;
    for (i = n - 2; i >= 0; i--)
    {
        if (arr[i] != x)
        {
            ans++;
            i -= (y - 1);
            y += (y - 1);
        }
        y++;
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