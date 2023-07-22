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
long long M = 1000000007;

void solve(int T)
{
    cin >> n;
    int l = 1, r = n, mid, ans = 1;
    vector<char> a(n + 1);
    a[1] = '0';
    a[n] = '1';
    while (l + 1 < r)
    {
        mid = (l + r) / 2;
        cout << "? " << mid << "\n";
        cout.flush();
        cin >> a[mid];
        if (a[mid] != a[l])
        {
            ans = l;
            r = mid;
        }
        else
        {
            ans = mid;
            l = mid;
        }
    }
    cout << "! " << ans;
    return;
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
    t = 1;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
    }
}