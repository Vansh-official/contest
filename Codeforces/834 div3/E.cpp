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

int n, m, i, j;
string s;

long long modu = 1000000007;

void solve(int T)
{
    long long x, ans = 0;
    cin >> n >> x;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    long long ar = 2, b = 1;
    for (i = 0; i < n; i++)
    {
        if (x > a[i])
        {
            ans++;
            x += a[i] / 2;
        }
        else if (a[i] / 2 == 0)
        {
            if (x * pow(3ll, b) * pow(2ll, ar) > a[i])
                ans++;
            else
                break;
        }
        else if (ar && x * 2 > a[i])
        {
            x *= 2;
            x += a[i] / 2;
            ar--;
            ans++;
        }
        else if (b && x * 3 > a[i])
        {
            x *= 3;
            x += a[i] / 2;
            b--;
            ans++;
        }
        else if (ar == 2 && x * 4 > a[i])
        {
            x *= 4;
            x += a[i] / 2;
            ar = 0;
            ans++;
        }
        else if (ar >= 1 && b == 1 && x * 6 > a[i])
        {
            x *= 6;
            x += a[i] / 2;
            ar--;
            b--;
            ans++;
        }
        else if (ar == 2 && b == 1 && x * 12 > a[i])
        {
            x *= 12;
            x += a[i] / 2;
            ar = 0;
            b = 0;
            ans++;
        }
        else
            break;
    }
    cout << ans;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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