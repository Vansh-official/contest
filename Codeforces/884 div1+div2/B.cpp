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

#define rep(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define irep(a, b, c) for (int(a) = (b); (a) >= (c); --(a))

set<int> primes;

void SieveOfEratosthenes()
{
    vector<bool> prime(100001, 1);
    for (int p = 2; p * p <= 100000; p++)
        if (prime[p] == true)
            for (int i = p * p; i <= 100000; i += p)
                prime[i] = false;
    for (int p = 2; p <= 100000; p++)
        if (prime[p])
            primes.insert(p);
}

void solve(int T)
{
    cin >> n;
    vector<int> a(n);
    vector<bool> visited(n + 1, 0);
    int l = 0, r = n - 1, turn = 0;
    for (auto itr = primes.begin(); itr != primes.end() && *itr <= n; itr++)
    {
        if (turn % 2 == 0)
            a[l++] = *itr;
        else
            a[r--] = *itr;
        visited[*itr] = 1;
        turn = (turn + 1) % 2;
    }
    for (i = n; i >= 1; i--)
        if (!visited[i])
        {
            if (turn % 2 == 0)
                a[l++] = i;
            else
                a[r--] = i;
            turn = (turn + 1) % 2;
        }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    SieveOfEratosthenes();

    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}