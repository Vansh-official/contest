#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <cmath>

using namespace std;

bool sortbysec(const pair<long long, int> &a, const pair<long long, int> &b)
{
    return (a.first > b.first);
}

void solve(int T)
{
    int n;
    cin >> n;
    vector<pair<long long, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    vector<int> ans(n + 1);
    ans[0] = 0;
    sort(arr.begin(), arr.end(), sortbysec);
    int cur = 1;
    long long f = 0;
    for (int i = 0; i < n; i++)
    {
        ans[arr[i].second] = cur;
        long long x = abs(cur);
        f += (x * arr[i].first * 2);
        if (cur > 0)
        {
            cur = -cur;
        }
        else
        {
            cur = abs(cur) + 1;
        }
    }
    cout << f << "\n";
    for (int i = 0; i < n + 1; i++)
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