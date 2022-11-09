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

int n, m, p, i, j;
string s;

void solve(int T)
{
    cin >> n;
    vector<long long> odd, even;
    long long x;
    for (i = 0; i < 2 * n; i++)
    {
        cin >> x;
        if (x % 2)
            odd.push_back(x);
        else
            even.push_back(x);
    }
    if (odd.size() == even.size())
        cout << 0;
    else if (odd.size() > even.size())
    {
        cout << odd.size() - n;
    }
    else
    {
        for (i = 0; i < even.size(); i++)
        {
            long long two = 2, count = 0;
            while (even[i] % 2 == 0)
            {
                even[i] /= 2;
                count++;
            }
            even[i] = count;
        }
        sort(even.begin(), even.end());
        long long ans = 0;
        for (i = 0; i < even.size() - n; i++)
        {
            ans += even[i];
        }
        cout << ans;
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