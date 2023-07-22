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
#include <sstream>
#include <tuple>
#include <iomanip>

using namespace std;

int n, m, i, j;
string s;
long long modu = 100000000;

void solve(int T)
{
    cin >> n >> m;
    if (n >= m)
    {
        cout << 0;
        return;
    }
    int ans = 0;
    if (n % 2)
    {
        for (i = 2; i <= n; i++)
            if (n % i == 0)
            {
                n += i;
                ans++;
                if (n >= m)
                {
                    cout << ans;
                    return;
                }
                break;
            }
    }
    int x = m - n;
    x = (x / 2) + (x % 2);
    ans += x;
    cout << ans;
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
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}