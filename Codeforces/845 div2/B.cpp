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
vector<long long> ans(100001, 0);

void calc()
{
    long long fact = 1;
    i = 1;
    for (long long p = 1; p <= 100000; p++, i++)
    {
        fact *= p;
        fact %= modu;
        long long x = (p - 1) * p;
        x %= modu;
        x *= fact;
        x %= modu;
        ans[i] = x;
    }
}

void solve(int T)
{
    cin >> n;
    cout << ans[n];
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    calc();

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}