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
#include <stack>

using namespace std;

void solve(int T)
{
    long long a, s;
    cin >> a >> s;
    vector<long long> ans;
    while (a && s)
    {
        long long x = a % 10, y = s % 10;
        a /= 10;
        s /= 10;
        if (y < x)
        {
            if (s == 0)
            {
                cout << -1;
                return;
            }
            y += (10 * (s % 10));
            s /= 10;
            if (y - x > 9 || y - x < 0)
            {
                cout << -1;
                return;
            }
        }
        ans.push_back(y - x);
    }
    if (a)
    {
        cout << -1;
        return;
    }
    vector<long long> b;
    if (s)
    {
        b.push_back(s);
    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        b.push_back(ans[i]);
    }
    int j = 0;
    while (j < b.size() && b[j] == 0)
    {
        j++;
    }
    if (j == b.size())
    {
        cout << 0;
        return;
    }
    for (int i = j; i < b.size(); i++)
    {
        cout << b[i];
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