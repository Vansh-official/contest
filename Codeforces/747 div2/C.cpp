#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <cstring>

using namespace std;

vector<int> primes;

void SieveOfEratosthenes()
{
    bool prime[100001];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p < 100001; p++)
    {
        if (prime[p] == true)
        {
            primes.push_back(p);
            for (int i = p * p; i < 100001; i += p)
                prime[i] = false;
        }
    }
}

void solve(int T)
{
    int n;
    char c;
    string s;
    cin >> n >> c >> s;
    int count = 0;
    vector<int> index;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
        else
        {
            index.push_back(i + 1);
        }
    }
    if (count == n)
    {
        cout << 0;
        return;
    }
    if (s[n - 1] == c)
    {
        cout << 1 << "\n"
             << n;
        return;
    }
    for (int i = 0; i < primes.size() && primes[i] < n; i++)
    {
        bool cond = 1;
        for (int j = 0; j < index.size(); j++)
        {
            if (index[j] % primes[i] == 0)
            {
                cond = 0;
                break;
            }
        }
        if (cond)
        {
            cout << 1 << "\n"
                 << primes[i];
            return;
        }
    }

    cout << 2 << "\n"
         << n << " " << n - 1;
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