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
    cin >> n;
    map<string, int> s;
    for (i = 0; i < n; i++)
    {
        cin >> m;
        string x;
        while (m--)
        {
            cin >> x;
            if (s.find(x) == s.end())
            {
                s.insert({x, 0});
            }
        }
        cin >> m;
        while (m--)
        {
            cin >> x;
            if (s.find(x) != s.end())
            {
                s[x]++;
            }
            else
            {
                s.insert({x, 1});
            }
        }
    }
    int count = 0;
    vector<string> ans;
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        if (itr->second <= n / 2)
        {
            count++;
            ans.push_back(itr->first);
        }
    }
    cout << count << " ";
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
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}