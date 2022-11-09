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
#include <climits>
#include <queue>

using namespace std;

int n, m, i, j;

bool sortbysec(const pair<double, double> &a, const pair<double, double> &b)
{
    if (a.second < b.second)
    {
        return 1;
    }
    else if (a.second > b.second)
    {
        return 0;
    }
    else if (a.first > b.first)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void solve(int T)
{
    cin >> n;
    vector<pair<double, double>> arr(n);
    vector<double> checked(n, 0);
    vector<bool> taken(n, 0);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i].second;
    }
    for (i = 0; i < n; i++)
    {
        cin >> arr[i].first;
    }
    sort(arr.begin(), arr.end());
    double dun = 0, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (dun >= arr[i].first)
        {
            sum += arr[i].second;
            checked[arr[i].first] += arr[i].second;
            taken[i] = 1;
            dun++;
        }
    }
    for (i = 1; i < n; i++)
    {
        checked[i] += checked[i - 1];
    }
    double ans = sum / dun, tn = 0;
    sort(arr.begin(), arr.end(), sortbysec);
    for (i = 0; i < n; i++)
    {
        if (taken[i])
        {
            double temp = sum - tn - arr[i].second, tempd = dun - 1;
        }
    }
    cout << fixed << setprecision(6) << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
        cout << "\n";
    }
}