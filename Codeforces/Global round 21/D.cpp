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

void solve(int T)
{
    cin >> n;
    vector<int> arr(n);
    set<int> c;
    set<int, greater<int>> d;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        c.insert(arr[i]);
        d.insert(arr[i]);
    }
    if (n <= 2)
    {
        cout << n - 1;
        return;
    }
    int ans = 0;
    i = 0;
    map<int, int> a;
    map<int, int, greater<int>> b;
    a.insert({arr[i], i});
    b.insert({arr[i], i});
    c.erase(arr[i]);
    d.erase(arr[i]);
    int last = i;
    j = i + 1;
    while (1)
    {
        a.insert({arr[j], j});
        b.insert({arr[j], j});
        c.erase(arr[j]);
        d.erase(arr[j]);
        if (a.begin()->second == i)
            last = max(last, b.begin()->second);
        else if (b.begin()->second == i)
            last = max(last, a.begin()->second);
        else
        {
            ans++;
            while (i < last)
            {
                a.erase(arr[i]);
                b.erase(arr[i++]);
            }
            last = j;
        }
        int x = a.begin()->first, y = b.begin()->first;
        if (x < y)
            swap(x, y);
        if (x > *d.begin() && y < *c.begin())
        {
            ans++;
            while (i < last)
            {
                a.erase(arr[i]);
                b.erase(arr[i++]);
            }
            last = j;
        }
        j++;
        if (j == n)
        {
            ans++;
            break;
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

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}