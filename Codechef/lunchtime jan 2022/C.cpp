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

void value(vector<long long> &arr, vector<long long> &brr, vector<pair<long long, long long>> &cur, vector<pair<long long, long long>> &ans, long long &val)
{
    bool cond = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != -1)
        {
            cond = 0;
            break;
        }
    }
    if (cond)
    {
        long long c = 0;
        for (int i = 0; i < cur.size(); i++)
        {
            c += (cur[i].first ^ cur[i].second);
        }
        if (c > val)
        {
            val = c;
            ans = cur;
        }
        return;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == -1)
        {
            continue;
        }
        long long x = arr[i];
        arr[i] = -1;
        for (int j = 0; j < brr.size(); j++)
        {
            if (brr[j] != -1)
            {
                long long y = brr[j];
                brr[j] = -1;
                cur.push_back({x, y});
                value(arr, brr, cur, ans, val);
                brr[j] = y;
                cur.pop_back();
            }
        }
        arr[i] = x;
    }
}

void solve(int T)
{
    int n;
    cin >> n;
    vector<long long> arr(n), brr(n);
    vector<pair<long long, long long>> ans, cur;
    long long val = -1;
    for (int i = 0; i < n; i++)
    {
        arr[i] = brr[i] = i + 1;
    }
    value(arr, brr, cur, ans, val);
    cout << val << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i].first << " " << ans[i].second << "\n";
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