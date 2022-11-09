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
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<pair<int, int>> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[i] = {0, i};
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '1')
            {
                temp[i].first++;
            }
        }
    }
    sort(temp.begin(), temp.end());
    string s = arr[temp[0].second];
    for (int i = 1; i < n; i++)
    {
        s += arr[temp[i].second];
    }
    vector<long long> x(n * m);
    for (int i = 0; i < n * m; i++)
    {
        x[i] = 0;
    }
    for (int i = 0; i < n * m; i++)
    {
        if (i == 0)
        {
            if (s[i] == '0')
            {
                x[i]++;
            }
            continue;
        }
        x[i] = x[i - 1];
        if (s[i] == '0')
        {
            x[i]++;
        }
    }
    long long ans = 0;
    for (int i = 0; i < n * m; i++)
    {
        if (s[i] == '1')
        {
            ans += (x[(n * m) - 1] - x[i]);
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