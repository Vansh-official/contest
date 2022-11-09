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
    long long count = 1;
    sort(arr.begin(), arr.end());
    for (i = 0; i < n; i++)
    {
        long long c = 1;
        while (i < n - 1 && arr[i] == arr[i + 1])
        {
            i++;
            c++;
        }
        count = max(count, c);
    }
    long long ans = 0;
    while (count < n)
    {
        ans += 1 + min(n - count, count);
        count += min(n - count, count);
    }
    cout << ans;
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