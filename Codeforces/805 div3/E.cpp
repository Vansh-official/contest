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

int n, m, k, i, j, x;

void rec(vector<pair<int, int>> &a, vector<int> &arr, vector<int> &brr, int ind, map<int, vector<int>> &s, vector<bool> &f)
{
    arr.push_back(a[ind].first);
    arr.push_back(a[ind].second);
    f[ind] = 1;
    int xx = a[ind].first, yy = a[ind].second;
    auto itr = s.find(xx), btr = s.find(yy);
    if (itr->second[0] == ind && !f[itr->second[1]])
        rec(a, brr, arr, itr->second[1], s, f);
    else if (itr->second[1] == ind && !f[itr->second[0]])
        rec(a, brr, arr, itr->second[0], s, f);
    if (btr->second[0] == ind && !f[btr->second[1]])
        rec(a, brr, arr, btr->second[1], s, f);
    else if (btr->second[1] == ind && !f[btr->second[0]])
        rec(a, brr, arr, btr->second[0], s, f);
}

void solve(int T)
{
    cin >> n;
    vector<pair<int, int>> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        a[i].first--;
        a[i].second--;
    }
    vector<int> count(n, 0);
    for (i = 0; i < n; i++)
        if (a[i].first == a[i].second)
        {
            cout << "NO";
            return;
        }
        else
        {
            count[a[i].first]++;
            count[a[i].second]++;
        }
    for (i = 0; i < n; i++)
        if (count[i] != 2)
        {
            cout << "NO";
            return;
        }
    map<int, vector<int>> s;
    for (i = 0; i < n; i++)
    {
        auto itr = s.find(a[i].first), btr = s.find(a[i].second);
        if (itr == s.end())
            s.insert({a[i].first, {i}});
        else
            itr->second.push_back(i);
        if (btr == s.end())
            s.insert({a[i].second, {i}});
        else
            btr->second.push_back(i);
    }
    vector<bool> f(n, 0);
    vector<int> arr, brr;
    for (i = 0; i < n; i++)
        if (!f[i])
            rec(a, arr, brr, i, s, f);
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    auto itr = unique(arr.begin(), arr.end());
    arr.resize(distance(arr.begin(), itr));
    itr = unique(brr.begin(), brr.end());
    brr.resize(distance(brr.begin(), itr));
    if (arr.size() == n && brr.size() == n)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}