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
    long long ans = 0, s = 0, zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            zero++;
        }
        if (arr[i] == 1)
        {
            one++;
        }
        s += arr[i];
    }
    ans = pow(2, zero) * one;
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