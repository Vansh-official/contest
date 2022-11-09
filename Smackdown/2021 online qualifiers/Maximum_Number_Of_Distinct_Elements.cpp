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

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

void solve(int T)
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());
    int last = -1;
    vector<pair<int, int>> ans(n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            last = 1;
            ans[i] = arr[i];
        }
        else if (last < arr[i].first)
        {
            ans[i].first = last;
            ans[i].second = arr[i].second;
            last++;
        }
        else
        {
            ans[i] = arr[i];
        }
    }
    sort(ans.begin(), ans.end(), sortbysec);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i].first << " ";
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