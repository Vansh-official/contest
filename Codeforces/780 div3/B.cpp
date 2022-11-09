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
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    if (n == 1 && arr[0] > 1)
    {
        cout << "NO";
    }
    else if (n > 1 && arr[n - 1] - arr[n - 2] > 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
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
        cout << "\n";
    }
}