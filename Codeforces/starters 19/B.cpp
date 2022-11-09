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

long long m = 1000000007;

void solve(int T)
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<long long>());
    long long ans = 1, t = 2;
    vector<long long> count;
    for (int i = 0; i < n; i++)
    {
        long long c = 1;
        while (i < n + 1 && arr[i] == arr[i + 1])
        {
            c++;
            i++;
        }
        count.push_back(c);
    }
    for (int i = 0; i < count.size(); i++)
    {
        ans *= t;
    }
    for (int i = 0; i < count.size(); i++)
    {
        long long x = ans / t;
        ans -= x;
        x *= count[i];
        ans += x;
    }
    ans %= m;
    cout << ans - 1;
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