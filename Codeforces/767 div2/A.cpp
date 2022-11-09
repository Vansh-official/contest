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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].second;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (arr[i].first > k)
        {
            break;
        }
        k += arr[i].second;
    }
    cout << k;
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