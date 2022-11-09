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

long long sumofFactors(long long n)
{
    long long res = 1;
    for (long long i = 2; i <= sqrt(n); i++)
    {

        long long curr_sum = 1;
        long long curr_term = 1;
        while (n % i == 0)
        {
            n = n / i;

            curr_term *= i;
            curr_sum += curr_term;
        }

        res *= curr_sum;
    }
    if (n >= 2)
        res *= (1 + n);

    return res;
}

void solve(int T)
{
    long long x, a, b;
    cin >> x >> a >> b;
    long long sum = 0;
    if (x % a)
    {
        cout << -1;
        return;
    }
    b *= (x / a);
    if (b >= 100000000000000000)
    {
        cout << -1;
        return;
    }
    a = x;
    if (sumofFactors(b) != x)
    {
        cout << -1;
        return;
    }
    cout << b;
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