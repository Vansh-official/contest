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

bool sortbyfir(const pair<int, pair<int, int>> &a,
               const pair<int, pair<int, int>> &b)
{
    return (a.first < b.first);
}

bool sortbysec(const pair<int, pair<int, int>> &a,
               const pair<int, pair<int, int>> &b)
{
    return (a.second.first < b.second.first);
}

void solve(int T)
{
    int n;
    cin >> n;
    vector<pair<int, pair<int, int>>> temp(n), arr;
    set<int> inc;
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i].first >> temp[i].second.first >> temp[i].second.second;
    }
    sort(temp.begin(), temp.end(), sortbysec);
    sort(temp.begin(), temp.end(), sortbyfir);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (temp[i].first <= temp[j].first && temp[i].second.second >= temp[j].second.second)
            {
                temp[i].second.second = max(temp[i].second.second, temp[j].second.second);
                temp[j].second.second = -1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int x = arr[i].first, y = arr[i].second.first, z = arr[i].second.second;
        auto itr = inc.begin();
        for (; itr != inc.end(); ++itr)
        {
            if (*itr >= x && *itr <= y)
            {
                z--;
            }
        }
        for (int j = y; j >= x && z > 0; j--)
        {
            if (inc.find(j) == inc.end())
            {
                inc.insert(j);
                z--;
            }
        }
    }
    cout << inc.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;

    for (int i = 1; i <= t; i++)
    {
        solve(t);
    }
}