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
    long long w, h;
    cin >> w >> h;
    vector<long long> l1, l2, b1, b2;
    for (int i = 0; i < 4; i++)
    {
        int k;
        cin >> k;
        while (k--)
        {
            long long x;
            cin >> x;
            if (i == 0)
            {
                l1.push_back(x);
            }
            else if (i == 1)
            {
                l2.push_back(x);
            }
            else if (i == 2)
            {
                b1.push_back(x);
            }
            else
            {
                b2.push_back(x);
            }
        }
    }
    long long ans;
    ans = (l1[l1.size() - 1] - l1[0]) * h;
    ans = max(ans, (l2[l2.size() - 1] - l2[0]) * h);
    ans = max(ans, (b1[b1.size() - 1] - b1[0]) * w);
    ans = max(ans, (b2[b2.size() - 1] - b2[0]) * w);
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