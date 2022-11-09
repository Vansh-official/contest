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
    long long b, x, y, cur = 0;
    cin >> n >> b >> x >> y;
    long long sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (cur + x > b)
        {
            cur -= y;
            sum += cur;
        }
        else
        {
            cur += x;
            sum += cur;
        }
    }
    cout << sum;
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