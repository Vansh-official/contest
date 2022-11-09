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
    int n;
    cin >> n;
    vector<long long> ans;
    long long cur = 0, i, one = 1;
    while (ans.size() < n)
    {
        i = 0;
        for (long long j = 31; j >= 0; j--)
        {
            if (((one << j) & cur) != 0)
            {
                long long x = 2 * j, y = x + 1;
                i = i | (one << y);
                i = i | (one << x);
            }
        }
        ans.push_back(i);
        cur++;
    }
    for (int k = 0; k < n; k++)
    {
        cout << ans[k] << " ";
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