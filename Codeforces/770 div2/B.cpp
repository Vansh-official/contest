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

int n, k, m, i, j;

void solve(int T)
{
    long long x, y;
    cin >> n >> x >> y;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        x += arr[i];
    }
    if (x % 2 == y % 2)
    {
        cout << "Alice";
    }
    else
    {
        cout << "Bob";
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