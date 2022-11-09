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
#include <stack>

using namespace std;

void solve(int T)
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = 0, i = 0;
    while (i < n - (2 * k))
    {
        ans += arr[i++];
    }
    if (i == n)
    {
        cout << ans;
        return;
    }
    vector<int> count;
    for (int j = i; j < n; j++)
    {
        int c = 1;
        while (j < n - 1 && arr[j] == arr[j + 1])
        {
            c++;
            j++;
        }
        count.push_back(c);
    }
    sort(count.begin(), count.end());
    if (count[count.size() - 1] > k)
    {
        ans += count[count.size() - 1] - k;
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