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
#include <climits>

using namespace std;

int n, m, k, i, j;

void solve(int T)
{
    cin >> n;
    vector<long long> arr(n + 1);
    long long x = 0;
    for (i = 0; i < n + 1; i++)
    {
        cin >> arr[i];
        x ^= arr[i];
    }
    if (n % 2 == 0)
    {
        for (i = 1; i < n + 1; i++)
            cout << (arr[0] ^ arr[i]) << " ";
    }
    else
    {
        for (i = 0; i < n + 1; i++)
            if (arr[i] == x)
                break;
        for (j = 0; j < n + 1; j++)
            if (i == j)
                continue;
            else
                cout << (arr[i] ^ arr[j]) << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}