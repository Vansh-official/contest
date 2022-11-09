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
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        while (arr[i] % 2 == 0)
        {
            arr[i] /= 2;
            count++;
        }
    }
    sort(arr.begin(), arr.end());
    arr[n - 1] *= pow(2, count);
    for (int i = 0; i < n; i++)
    {
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