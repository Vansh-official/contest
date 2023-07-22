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
#include <sstream>
#include <tuple>
#include <iomanip>

using namespace std;

int n, m, i, j, k;
string s;
long long M = 1000000007;

vector<bool> ans(1000001, 0);

void in(vector<long long> &a, int N)
{
    for (int x = 0; x < N; x++)
        cin >> a[i];
    return;
}

void solve(int T)
{
    long long x;
    cin >> x;
    if (ans[x])
        cout << "YES";
    else
        cout << "NO";
}

// (r^n - 1) / (r - 1) = x

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (long long y = 2; y <= 1000; y++)
    {
        long long sum = 1 + y + (y * y), cur = y * y * y;
        while (sum <= ans.size())
        {
            ans[sum] = 1;
            sum += cur;
            cur *= y;
        }
    }

    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}