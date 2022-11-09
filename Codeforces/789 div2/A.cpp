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

int n, m, p, i, j;

void solve(int T)
{
    cin >> n;
    vector<int> arr(n);
    m = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            m++;
    }
    if (m == n)
        cout << 0;
    else if (m)
        cout << n - m;
    else
    {
        sort(arr.begin(), arr.end());
        for (i = 0; i < n - 1; i++)
            if (arr[i] == arr[i + 1])
            {
                cout << n;
                return;
            }
        cout << n + 1;
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