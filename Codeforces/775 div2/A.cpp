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
#include <random>

using namespace std;

int n, m, k, q, i, j;

void solve(int T)
{
    freopen("input.txt", "w", stdout);

    random_device rd;
    mt19937 gen(rd());
    m = n = 10;
    uniform_int_distribution<> distt(1, 10);
    k = distt(gen);
    uniform_int_distribution<> distu(1, 10);
    q = distu(gen);
    cout << n << " " << m << " " << k << " " << q << "\n";
    while (q--)
    {
        uniform_int_distribution<> distv(1, n);
        i = distv(gen);
        uniform_int_distribution<> distw(1, m);
        j = distw(gen);
        cout << i << " " << j << "\n";
    }
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