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

using namespace std;

int n, m, i, j;

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

void solve(int T)
{
    cin >> n;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n - 2; i += 3)
    {
        arr[i] = arr[i + 2] = 2 * arr[i + 1];
    }
    while (i < n)
    {
        arr[i++] *= 2;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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