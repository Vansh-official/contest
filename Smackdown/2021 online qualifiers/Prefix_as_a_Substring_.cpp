#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> primes;

void SieveOfEratosthenes()
{
    bool prime[10000001];
    for (int i = 0; i < 10000001; i++)
    {
        prime[i] = 1;
    }

    for (int p = 2; p * p <= 10000000; p++)
    {
        if (prime[p] == 1)
        {
            primes.push_back(p);
            for (int i = p * p; i <= 10000000; i += p)
                prime[i] = 0;
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
    cout << primes[primes.size() - 1] << "\n";
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int ans = 0;
        int z = -1;
        for (int i = 0; i < primes.size(); i++)
        {
            if (primes[i] - 2 >= x)
            {
                z = i;
                break;
            }
        }
        if (z == -1)
        {
            cout << y - x << "\n";
            continue;
        }
        for (int i = z; i < primes.size() && x < y; i++)
        {
            if (y < primes[i])
            {
                ans += y - x;
                x = y;
                break;
            }
            ans += primes[i] - 1 - x;
            x = primes[i];
        }
        if (x < y)
        {
            ans += y - x;
            x = y;
        }
        cout << ans << "\n";
    }
    return 0;
}
