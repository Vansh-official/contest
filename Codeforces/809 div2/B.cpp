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
string s;

void solve(int T)
{
    cin >> n;
    vector<vector<int>> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> j;
        a[j - 1].push_back(i);
    }
    for (i = 0; i < n; i++)
    {
        m = a[i].size();
        int l = 0;
        if (a[i].size())
        {
            l++;
            int prev = 0;
            j = 1;
            while (j < m)
            {
                if ((a[i][j] - a[i][prev]) % 2)
                {
                    l++;
                    prev = j;
                }
                j++;
            }
        }
        cout << l << " ";
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