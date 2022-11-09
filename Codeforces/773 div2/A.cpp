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

void solve(int T)
{
    int n = 3;
    vector<pair<double, double>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    if (arr[0].second == arr[1].second && arr[2].second < arr[0].second)
    {
        cout << std::setprecision(9) << abs(arr[0].first - arr[1].first);
    }
    else if (arr[1].second == arr[2].second && arr[0].second < arr[1].second)
    {
        cout << std::setprecision(9) << abs(arr[1].first - arr[2].first);
    }
    else if (arr[0].second == arr[2].second && arr[1].second < arr[0].second)
    {
        cout << fixed << std::setprecision(9) << abs(arr[0].first - arr[2].first);
    }
    else
    {
        cout << fixed << std::setprecision(9) << 0;
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