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

void solve(int T)
{
    int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 1;
        return;
    }
    if (k == 1)
    {
        cout << -1;
        return;
    }
    vector<int> ans;
    int i;
    for (i = 1; i <= n; i++)
    {
        if (k == 1)
        {
            break;
        }
        ans.push_back(i);
        k--;
    }
    while (n >= i)
    {
        ans.push_back(n--);
    }
    for (i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
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