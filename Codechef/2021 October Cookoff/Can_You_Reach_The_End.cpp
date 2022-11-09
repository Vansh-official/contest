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
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    int x, y, i;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[i] = {x, y};
    }
    sort(arr.begin(), arr.end());
    bool a = 0, b = 0;
    x = arr[0].first + 1;
    y = arr[0].second - 1;
    i = 1;
    while (y >= 1)
    {
        if (arr[i].first != x || arr[i].second != y)
        {
            a = 1;
            break;
        }
        x++;
        y--;
    }
    x = arr[n - 1].first - 1;
    y = arr[n - 1].second + 1;
    i = n - 2;
    while (y <= n)
    {
        if (arr[i].first != x || arr[i].second != y)
        {
            b = 1;
            break;
        }
        x--;
        y++;
    }

    if (a && b)
    {
        cout << "YES";
        return;
    }
    cout << "NO";
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