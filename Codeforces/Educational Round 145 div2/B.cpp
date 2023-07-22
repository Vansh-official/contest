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

int n, m, i, j, k;
string s;

long long modu = 1000000007;

void solve(int T)
{
    long long x;
    cin >> x;
    if (x == 1)
    {
        cout << 0;
        return;
    }
    long long a, b, sum;
    long long l = 1, r = 999999999, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        long long temp = (mid - 1) / 2;
        temp++;
        temp = (1 + mid) * temp / 2;
        if (temp * 4 >= x)
        {
            a = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    x--;
    l = 2;
    r = 1000000000;
    while (l <= r)
    {
        mid = (l + r) / 2;
        long long temp = (mid - 2) / 2;
        temp++;
        temp = (2 + mid) * temp / 2;
        if (temp * 4 >= x)
        {
            b = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << min(a, b);
}

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

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