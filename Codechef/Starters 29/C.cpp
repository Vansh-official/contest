#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>
#include <climits>

using namespace std;

long long modul = 1000000007;
int n, m, i, j;
void solve(int T)
{
    int x, cur, temp;
    long long w;
    cin >> n >> m;
    vector<long long> quantity(n);
    for (i = 0; i < n; i++)
    {
        cin >> quantity[i];
    }
    for (i = 0; i < m; i++)
    {
        cin >> cur >> x;
        long long t = quantity[cur - 1];
        while (x--)
        {
            cin >> w >> temp;
            quantity[temp - 1] += (quantity[cur - 1] * w);
            quantity[temp - 1] %= modul;
        }
        quantity[cur - 1] -= t;
    }
    for (i = 0; i < n; i++)
    {
        cout << quantity[i] << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
    }
}