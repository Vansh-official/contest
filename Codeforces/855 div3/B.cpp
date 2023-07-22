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
    cin >> n >> m >> s;
    map<char, int> a;
    for (i = 0; i < n; i++)
        a[s[i]]++;
    int ans = 0;
    for (auto itr = a.begin(); itr != a.end(); itr++)
    {
        char c = itr->first, d;
        if (islower(c))
            d = toupper(c);
        else
            d = tolower(c);
        auto jtr = a.find(d);
        int l = itr->second, r;
        if (jtr == a.end())
            r = 0;
        else
            r = jtr->second;
        int x = min(l, r);
        ans += x;
        l -= x;
        r -= x;
        if (l)
        {
            x = l / 2;
            x = min(m, x);
            m -= x;
            l -= 2 * x;
            ans += x;
        }
        else if (r)
        {
            x = r / 2;
            x = min(m, x);
            m -= x;
            r -= 2 * x;
            ans += x;
        }
        itr->second = l;
        if (jtr != a.end())
            jtr->second = r;
        // cout << itr->first << " " << ans << "\n";
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