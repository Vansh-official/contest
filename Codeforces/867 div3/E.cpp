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
    cin >> n >> s;
    if (n % 2)
    {
        cout << -1;
        return;
    }
    int count = 0;
    int a[26];
    for (i = 0; i < 26; i++)
        a[i] = 0;
    for (i = 0, j = n - 1; i < j; i++, j--)
        if (s[i] == s[j])
        {
            a[s[i] - 'a']++;
            count++;
        }
    if (!count)
    {
        cout << 0;
        return;
    }
    int x, ind = 0;
    for (i = 0; i < 26; i++)
        if (a[i] > a[ind])
            ind = i;
    x = a[ind];
    if (x <= count / 2)
    {
        cout << (count + 1) / 2;
        return;
    }
    int ans = count / 2;
    x -= count / 2;
    for (i = 0, j = n - 1; i < j; i++, j--)
        if (x && s[i] != s[j] && s[i] != 'a' + ind && s[j] != 'a' + ind)
        {
            x--;
            ans++;
        }
    if (x)
        cout << -1;
    else
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