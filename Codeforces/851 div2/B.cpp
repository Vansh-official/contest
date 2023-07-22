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

int sod(int x)
{
    int ret = 0;
    while (x)
    {
        ret += x % 10;
        x /= 10;
    }
    // cout << ret << " ";
    return ret;
}

void solve(int T)
{
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2;
        return;
    }
    if (n % 10 != 9)
    {
        cout << n / 2 << " " << (n / 2) + 1;
        return;
    }
    vector<int> a, x, y;
    while (n)
    {
        a.push_back(n % 10);
        n /= 10;
    }
    int xs = 0, ys = 0;
    for (i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
        {
            x.push_back(a[i] / 2);
            y.push_back(a[i] / 2);
        }
        else
        {
            if (xs > ys)
            {
                y.push_back((a[i] / 2) + 1);
                x.push_back(a[i] / 2);
                xs--;
            }
            else if (ys > xs)
            {
                x.push_back((a[i] / 2) + 1);
                y.push_back(a[i] / 2);
                ys--;
            }
            else
            {
                y.push_back((a[i] / 2) + 1);
                x.push_back(a[i] / 2);
                ys++;
            }
        }
    }
    int ansx = 0, ansy = 0;
    for (i = x.size() - 1; i >= 0; i--)
        ansx = (ansx * 10) + x[i];
    for (i = y.size() - 1; i >= 0; i--)
        ansy = (ansy * 10) + y[i];
    cout << ansx << " " << ansy;
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