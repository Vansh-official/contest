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

    if (k == 0)
    {
        cout << "YES"
             << "\n"
             << 0;
        return;
    }

    else if (k % 2 != 0)
    {
        int i = 1, l = 0;
        vector<int> ans;
        while (l <= n)
        {
            ans.push_back(l + 1);
            l += i;
            if (i > n)
            {
                cout << "NO";
                break;
            }
            if (k == l)
            {
                cout << "YES\n";
                cout << ans.size();
                for (int i = 0; i < ans.size(); i++)
                {
                    cout << "\n"
                         << ans[i];
                }
                return;
            }
            i *= 2;
        }
    }

    else
    {
        cout << "NO";
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