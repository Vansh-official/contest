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
#include <tuple>
#include <stack>
#include <climits>

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    vector<int> arr(32, 0);
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        long long x;
        cin >> x;
        for (long long j = (long long)1 << 31; j > 0; j /= 2, c++)
        {
            if ((x & j) != 0)
            {
                arr[c]++;
            }
        }
    }
    long long ans = 0;
    int c = 0;
    for (long long i = (long long)1 << 31; i > 0; i /= 2, c++)
    {
        if (arr[c] > 1)
        {
            ans = ans ^ i;
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