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
    int n, m, b = 0;
    cin >> n;
    vector<int> arr(n), count(n + 1, 0);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
        s.insert(i);
    }
    s.insert(n);
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]--;
        if (s.find(arr[i]) != s.end())
        {
            s.erase(arr[i]);
        }
        m = *(s.begin());
        if (count[m] == 0)
        {
            ans.push_back(m);
            for (int j = b; j <= i; j++)
            {
                s.insert(arr[j]);
            }
            b = i + 1;
        }
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
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