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

int n, m, k, i, j;

void solve(int T)
{
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    j = 0;
    for (i = 0; i < n; i++)
    {
        while (i < n - 1 && arr[i] == arr[i + 1])
        {
            j++;
            i++;
        }
    }
    if (j % 2)
        j++;
    cout << n - j;
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