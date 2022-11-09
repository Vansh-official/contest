#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <numeric>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    vector<int> ans, taken(100001, 0);
    ans.push_back(1);
    taken[1] = 1;
    for (int i = 1; i < n; i++)
    {
        int k = 2, sum;
        while (1)
        {
            while (taken[k] == 1)
            {
                k++;
            }
            sum = k;
            bool cond = 1;
            for (int j = i - 1; j >= 0; j--)
            {
                sum += ans[j];
                if (sum % (i - j + 1) == 0)
                {
                    cond = 0;
                    break;
                }
            }
            if (cond)
            {
                break;
            }
            k++;
        }
        ans.push_back(k);
        taken[k] = 1;
    }
    for (int i = 0; i < n; i++)
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