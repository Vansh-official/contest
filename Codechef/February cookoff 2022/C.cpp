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

int n, m, i, j;

void solve(int T)
{
    string s;
    cin >> n >> s;
    if (s[0] == '0' || s[1] == '0' || s[n] == '0')
    {
        cout << "No";
        return;
    }
    vector<int> ans;
    ans.push_back(0);
    ans.push_back(1);
    for (i = 2; i < n;)
    {
        char c = s[i];
        m = ans[ans.size() - 1];
        j = i;
        while (j < n - 1 && s[j + 1] == c)
        {
            j++;
        }
        if (c == '1')
        {
            while (i <= j)
            {
                ans.push_back(i++);
            }
        }
        else
        {
            ans[ans.size() - 1] = i;
            i++;
            while (i <= j)
            {
                ans.push_back(i++);
            }
            ans.push_back(m);
        }
    }
    cout << "Yes\n";
    for (i = 0; i < n; i++)
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