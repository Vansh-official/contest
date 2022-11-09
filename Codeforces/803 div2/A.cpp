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
    for (i = 0; i < n; i++)
    {
        int x = 0;
        for (j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            else
                x = (x ^ arr[j]);
        }
        if (x == arr[i])
        {
            cout << arr[i];
            return;
        }
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