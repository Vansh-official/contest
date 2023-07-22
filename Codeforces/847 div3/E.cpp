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

int n, m, i, j, k;
string s;

long long modu = 1000000007;

void solve(int T)
{
    long long x, a = 0, b = 0;
    cin >> x;
    if (x % 2)
    {
        cout << -1;
        return;
    }
    vector<long long> nums;
    for (long long p = 1; p <= 10000000000; p *= 2)
        if ((p & x) == 0)
            nums.push_back(2ll * p);
        else
            a += p;
    for (i = nums.size() - 1; i >= 0; i--)
    {
        // cout << nums[i] << " ";
        if (2ll * x >= a + b + nums[i])
        {
            a += nums[i] / 2;
            b += nums[i] / 2;
        }
    }
    // cout << a << " " << b << "\n";
    if (2ll * x == a + b)
        cout << a << " " << b;
    else
        cout << -1;
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

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