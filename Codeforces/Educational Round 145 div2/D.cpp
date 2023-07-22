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
    cin >> s;
    string p = s;
    sort(p.begin(), p.end());
    n = s.length();
    long long ans = 0;
    for (i = 0; i < n - 1; i++)
        if (s[i + 1] == p[i] && s[i] == p[i + 1])
        {
            swap(s[i], s[i + 1]);
            ans += 1000000000001;
        }
    for (i = 0, j = 0; i < n; i++, j++)
        if (s[i] != p[j])
        {
            ans += 1000000000000;
            j--;
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
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}