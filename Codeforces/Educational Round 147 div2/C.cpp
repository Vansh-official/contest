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

long long M = 1000000007;

void solve(int T)
{
    cin >> s;
    n = s.length();
    int ans = INT_MAX;
    for (i = 0; i < 26; i++)
    {
        int cura = 0, l, temp;
        for (j = 0; j < n; j++)
        {
            if (s[j] == 'a' + i)
                continue;
            l = 1;
            while (j < n - 1 && s[j + 1] != 'a' + i)
            {
                j++;
                l++;
            }
            temp = 0;
            while (l)
            {
                temp++;
                l /= 2;
            }
            cura = max(cura, temp);
        }
        ans = min(ans, cura);
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