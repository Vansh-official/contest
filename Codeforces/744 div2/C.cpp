#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <climits>
#include <numeric>

using namespace std;

vector<long long> fact(17);
vector<pair<long long, int>> facts;

int n, m, i, j;

int countSetBits(long long num)
{
    int count = 0;
    while (num)
    {
        num &= (num - 1);
        count++;
    }
    return count;
}

void subsetSums(int l, int r, int count, long long sum)
{
    if (l > r)
    {
        facts.push_back({sum, count});
        return;
    }
    subsetSums(l + 1, r, count + 1, sum + fact[l]);
    subsetSums(l + 1, r, count, sum);
}

void solve(int T)
{
    long long n;
    cin >> n;
    int ans = countSetBits(n);
    for (i = 0; i < facts.size(); i++)
    {
        if (n >= facts[i].first)
        {
            ans = min(ans, facts[i].second + countSetBits(n - facts[i].first));
        }
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    fact[1] = 1;
    for (long long p = 2; p <= 16; p++)
    {
        fact[p] = fact[p - 1] * p;
    }
    subsetSums(0, 16, 0, 0);
    sort(facts.begin(), facts.end());
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}