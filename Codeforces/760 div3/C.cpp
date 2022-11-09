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
#include <stack>

using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve(int T)
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 2)
    {
        if (arr[0] == arr[1])
        {
            cout << 0;
        }
        else
        {
            cout << max(arr[0], arr[1]);
        }
        return;
    }
    long long a = arr[0], b = arr[1];
    for (int i = 0; i < n; i += 2)
    {
        a = gcd(a, arr[i]);
    }
    for (int i = 1; i < n; i += 2)
    {
        b = gcd(b, arr[i]);
    }
    bool x = 1, y = 1;
    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] % b == 0)
        {
            x = 0;
            break;
        }
    }
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] % a == 0)
        {
            y = 0;
            break;
        }
    }
    if (x)
    {
        cout << b;
    }
    else if (y)
    {
        cout << a;
    }
    else
    {
        cout << 0;
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