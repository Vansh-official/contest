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

void rec(priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> &p, vector<int> &arr, int k)
{
    if (k == 0)
    {
        return;
    }
    auto itr = p.top();
    p.pop();
    rec(p, arr, k - 1);
    int x;
    if (itr.second > 0)
    {
        x = arr[itr.second];
    }
    else
    {
        x = 0;
    }
    if (itr.second < n - 1)
    {
        x = max(x, arr[itr.second + 1]);
    }
    arr[itr.second] = x;
    return;
}

void solve(int T)
{
    int k, x = 0;
    cin >> n >> k;
    vector<int> arr(n), changed(n, 0);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        x = max(x, arr[i]);
        p.push({arr[i], i});
    }
    if (k >= n - 1)
    {
        cout << x;
        return;
    }
    rec(p, arr, k);
    cout << p.top().first;
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

/*while (k--)
    {
        auto itr = p.top();
        p.pop();
        i = itr.second;
        if (i > 0)
        {
            arr[i] = max(arr[i], arr[i - 1]);
        }
        if (i < n - 1)
        {
            arr[i] = max(arr[i], arr[i + 1]);
        }
        changed[i]++;
        p.push({arr[i], i});
        k += changed[i] - 1;
        changed[i] = 1;
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        for (i = 0; i < n; i++)
        {
            cout << changed[i] << " ";
        }
        cout << k << "\n";
    }*/