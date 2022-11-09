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

int n, m, p, i, j;

void solve(int T)
{
    long long odd = 0, even = 0;
    cin >> n;
    vector<long long> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2)
            odd += arr[i];
        else
            even += arr[i];
    }
    long long x = odd / (n / 2), y = even / (n / 2), x1, x2, y1, y2, t = n / 2;
    if (odd % (n / 2) == 0)
        x++;
    if (even % (n / 2))
        y++;
    if (x % 2 == 0)
    {
        x1 = x - 1;
        x2 = x + 1;
    }
    else
        x1 = x2 = x;
    if (y % 2)
    {
        y1 = y - 1;
        y2 = y + 1;
    }
    else
        y1 = y2 = y;
    if (odd - (t * x1) + even - (t * y1) == 0 || odd - (t * x1) + even - (t * y2) == 0 ||
        odd - (t * x2) + even - (t * y1) == 0 || odd - (t * x2) + even - (t * y2) == 0)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
        cout << "\n";
    }
}