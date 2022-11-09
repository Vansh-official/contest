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
#include <climits>

using namespace std;

bool sortbysec(const pair<pair<int, int>, int> &a,
               const pair<pair<int, int>, int> &b)
{
    return (a.second > b.second);
}

void solve(int T)
{
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> arr(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first.first >> arr[i].first.second;
        arr[i].second = arr[i].first.second - arr[i].first.first + 1;
    }
    sort(arr.begin(), arr.end(), sortbysec);
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        ans[ind] = arr[i];
        if (arr[i].second == 1)
        {
            ans[ind].second = ans[ind].first.first;
            ind++;
            continue;
        }
        bool dun = 0;
        for (int j = i + 1; j < n && arr[j].second > arr[i].second - 2; j++)
        {
            if (arr[j].first.first == arr[i].first.first)
            {
                ans[ind++].second = arr[i].first.second;
                dun = 1;
                break;
            }
            else if (arr[j].first.second == arr[i].first.second)
            {
                ans[ind++].second = arr[i].first.first;
                dun = 1;
                break;
            }
        }
        if (dun)
        {
            continue;
        }
        for (int j = i + 1, k = n - 1; j < k; j++)
        {
            if (arr[j].first.first != arr[i].first.first && arr[j].first.second != arr[i].first.second)
            {
                continue;
            }
            if (arr[j].first.first - 1 == arr[i].first.first && arr[j].second == arr[i].second - 1)
            {
                ans[ind++].second = arr[i].first.first;
                break;
            }
            if (arr[j].first.second + 1 == arr[i].first.second && arr[j].second == arr[i].second - 1)
            {
                ans[ind++].second = arr[i].first.second;
                break;
            }
            while (arr[k].second + arr[j].second + 1 < arr[i].second)
            {
                k--;
            }
            int y = k;
            while (arr[y].second + arr[j].second + 1 == arr[i].second)
            {
                if (arr[j].first.second + 2 == arr[y].first.first || arr[j].first.first == arr[y].first.second + 2)
                {
                    vector<int> temp(4);
                    temp[0] = arr[j].first.first;
                    temp[1] = arr[j].first.second;
                    temp[2] = arr[y].first.first;
                    temp[3] = arr[y].first.second;
                    sort(temp.begin(), temp.end());
                    ans[ind++].second = temp[1] + 1;
                    dun = 1;
                    break;
                }
                y--;
            }
            if (dun)
            {
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i].first.first << " " << ans[i].first.second << " " << ans[i].second << "\n";
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
    }
}