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
    for (i = 0; i < n; i++)
        cin >> arr[i];
    if (n % 2)
    {
        cout << "Mike";
        return;
    }
    x = arr[0];
    for (i = 0; i < n; i++)
        x = min(x, arr[i]);
    for (i = 0; i < n; i++)
        arr[i] -= x;
    for (i = 0; i < n; i++)
        if (arr[i] == 0 && i % 2 == 0)
        {
            cout << "Joe";
            return;
        }
        else if (arr[i] == 0 && i % 2)
        {
            cout << "Mike";
            return;
        }
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