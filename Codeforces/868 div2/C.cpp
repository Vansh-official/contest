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

set<long long> primes;

void SieveOfEratosthenes()
{
    vector<bool> prime(1000001, 1);

    for (int p = 2; p * p <= 1000000; p++)
        if (prime[p] == 1)
            for (int i = p * p; i <= 1000000; i += p)
                prime[i] = 0;

    for (int p = 2; p <= 1000000; p++)
        if (prime[p])
            primes.insert(p);
}

void solve(int T)
{
    cin >> n;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    map<long long, long long> ct;
    for (i = 0; i < n; i++)
    {
        for (long long x = 2; x <= sqrt(a[i]) && a[i] > 1; x++)
            while (a[i] % x == 0)
            {
                a[i] /= x;
                ct[x]++;
            }
        if (a[i] > 1)
            ct[a[i]]++;
    }
    long long ans = 0, ones = 0;
    for (auto itr = ct.begin(); itr != ct.end(); itr++)
    {
        ans += (itr->second / 2);
        ones += (itr->second % 2);
    }
    ans += ones / 3;
    ones %= 3;
    if (ans)
        cout << ans;
    else
        cout << 0;
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // SieveOfEratosthenes();
    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}