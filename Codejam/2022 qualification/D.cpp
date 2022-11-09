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
#include <climits>

using namespace std;

long long ans;

void calc(vector<vector<pair<long long, int>>> funs, set<int> initial)
{
}

void rec(vector<pair<long long, int>> &arr, vector<pair<long long, int>> &f, int cur)
{
    f.push_back({arr[cur].first, cur});
    if (arr[cur].second == 0)
    {
        return;
    }
    return rec(arr, f, arr[cur].second);
}

void solve(int T)
{
    int n;
    cin >> n;
    vector<pair<long long, int>> arr(n);
    vector<bool> pointed(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].second;
        arr[i].second--;
        pointed[arr[i].second] = 1;
    }
    set<int> initial;
    for (int i = 0; i < n; i++)
    {
        if (!pointed[i])
        {
            initial.insert(i);
        }
    }
    vector<vector<pair<long long, int>>> funs;
    for (int i = 0; i < n; i++)
    {
        vector<pair<long long, int>> f;
        rec(arr, f, i);
        funs.push_back(f);
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
        solve(i);
        cout << "\n";
    }
}