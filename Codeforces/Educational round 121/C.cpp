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
#include <stack>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    vector<pair<long long, long long>> arr(n), time(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].second;
        time[i].first = arr[i].first - arr[i].second + 1;
        time[i].second = arr[i].first;
    }
    sort(time.begin(), time.end());
    long long ans = 0, start = time[0].first, fin = time[0].second;
    for (int i = 0; i < n - 1; i++)
    {
        if (fin < time[i + 1].first)
        {
            ans += ((fin - start + 1) * (2 + fin - start)) / 2;
            start = time[i + 1].first;
            fin = time[i + 1].second;
        }
        else
        {
            fin = max(fin, time[i + 1].second);
        }
    }
    ans += ((fin - start + 1) * (2 + fin - start)) / 2;
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