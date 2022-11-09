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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int cur = 0;
        while (arr[i] % 2 == 0)
        {
            arr[i] /= 2;
            cur++;
        }
        if (ans == -1)
        {
            ans = cur;
        }
        else
        {
            ans = min(ans, cur);
        }
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