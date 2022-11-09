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

int n, k, i;

void solve(int T)
{
    cin >> n;
    vector<long long> count, arr(n - 1);
    for (i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    long long j, m = 0;
    sort(arr.begin(), arr.end());
    for (i = 0; i < n - 1; i++)
    {
        j = 1;
        while (i < n - 2 && arr[i] == arr[i + 1])
        {
            j++;
            i++;
        }
        count.push_back(j);
    }
    sort(count.begin(), count.end(), greater<int>());
    long long ans = count.size() + 1;
    for (i = 0; i < count.size(); i++)
    {
        count[i] -= (count.size() - i);
        count[i] = max(count[i], (long long)0);
    }
    sort(count.begin(), count.end());
    for (i = 0; i < n - 1; i++)
    {
    }
    cout << ans + 1;
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