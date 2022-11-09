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
    vector<int> arr(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
    }
    sort(arr.begin(), arr.end(), greater<int>());
    int ans = 0;
    if (arr[0] == 1 && arr[1] == 1)
    {
        cout << -1;
        return;
    }
    if (arr[1] == 0)
    {
        cout << 0;
        return;
    }
    ans++;
    for (int i = 1; i < n + 1; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }
        ans += arr[i];
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