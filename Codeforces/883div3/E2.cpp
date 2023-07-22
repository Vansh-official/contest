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

void in(vector<long long> &a, int N)
{
    for (int x = 0; x < N; x++)
        cin >> a[i];
    return;
}

void bin(long long x)
{
    if (x > 1)
        bin(x / 2);
    cout << x % 2;
}

void solve(int T)
{
    for (long long x = 2; x <= 100; x++)
    {
        long long sum = 1 + x, cur = x * x;
        while (sum <= 1000)
        {
            sum += cur;
            cout << sum << " ";
            bin(sum);
            cout << "\n";
            cur *= x;
        }
        cout << "-------------\n";
    }
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
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}