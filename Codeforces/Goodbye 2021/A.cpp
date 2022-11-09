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
#include <tuple>
#include <stack>
#include <climits>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(101);
    int ans = 0;
    for (int i = 0; i < 101; i++)
    {
        arr[i].first = arr[i].second = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x >= 0)
        {
            arr[x].first++;
        }
        else
        {
            arr[-x].second++;
        }
    }
    if (arr[0].first || arr[0].second)
    {
        ans++;
    }
    for (int i = 1; i < 101; i++)
    {
        if (arr[i].first || arr[i].second > 1)
        {
            ans++;
        }
        if (arr[i].second || arr[i].first > 1)
        {
            ans++;
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