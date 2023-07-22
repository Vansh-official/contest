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
    int k, d, w;
    cin >> n >> k >> d >> w;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    i = 0;
    while (i < n)
    {
        ans++;
        int dt = a[i] + w;
        int cur = k;
        while (i < n && a[i] <= dt + d && cur)
        {
            i++;
            cur--;
        }
    }
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