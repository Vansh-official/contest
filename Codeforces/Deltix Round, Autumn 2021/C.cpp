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

set<int> primes;

void SieveOfEratosthenes()
{
    bool prime[1000001];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= 1000000; p++)
    {
        if (prime[p] == true)
        {
            primes.insert(p);
            for (int i = p * p; i <= 1000000; i += p)
                prime[i] = false;
        }
    }
}

void solve(int T)
{
    int n, e;
    cin >> n >> e;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> pre(n);
    pre[0] = 0;
    if (arr[0] == 1)
    {
        pre[0]++;
    }
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1];
        if (arr[i] == 1)
        {
            pre[i]++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    SieveOfEratosthenes();
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}