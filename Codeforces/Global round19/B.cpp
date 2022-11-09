#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;

int n, m, i, j, k;
int mex[101][101];

void solve(int T)
{
    cin >> n;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = 0;
    for (i = 0; i < n; i++)
    {
        mex[i][1] = ((arr[i] == 0) ? 1 : 0) + 1;
        ans += mex[i][1];
    }
    for (i = 2; i <= n; i++)
    {
        for (j = 0; j < n - i + 1; j++)
        {
            long long maxi = 0;
            set<long long> s;
            for (long long x = 0; x <= 101; x++)
            {
                s.insert(x);
            }
            for (k = j; k < j + i - 1; k++)
            {
                if (s.find(arr[k]) != s.end())
                {
                    s.erase(arr[k]);
                }
                auto itr = s.begin();
                long long x = *itr;
                maxi = max(maxi, (x + 1 + mex[k + 1][j + i - 1 - k]));
            }
            if (s.find(arr[j + i - 1]) != s.end())
            {
                s.erase(arr[j + i - 1]);
            }
            auto itr = s.begin();
            long long x = *itr;
            maxi = max(maxi, x + 1);
            mex[j][i] = maxi;
            ans += maxi;
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
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}