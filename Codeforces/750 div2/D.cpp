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
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end());
    vector<pair<int, int>> ans;
    int i, x, y, z, a;
    if (n % 2 == 0)
    {
        i = 0;
    }
    else
    {
        i = 3;
        x = arr[0].first, y = arr[1].first, z = arr[2].first;
        a = std::lcm(x + y, z);
        ans.push_back({a / (x + y), arr[0].second});
        ans.push_back({a / (x + y), arr[1].second});
        ans.push_back({-(a / z), arr[2].second});
    }
    for (; i + 1 < n; i += 2)
    {
        y = arr[i].first, z = arr[i + 1].first;
        if (y == z)
        {
            ans.push_back({1, arr[i].second});
            ans.push_back({-1, arr[i + 1].second});
            continue;
        }
        x = std::lcm(y, z);
        ans.push_back({x / y, arr[i].second});
        ans.push_back({-(x / z), arr[i + 1].second});
    }

    sort(ans.begin(), ans.end(), sortbysec);

    for (i = 0; i < ans.size(); i++)
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