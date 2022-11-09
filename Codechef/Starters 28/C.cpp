#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <climits>
#include <numeric>

using namespace std;

int n, m, i, j;
void solve(int T)
{
    int k, z;
    string s;
    cin >> n >> k >> s;
    vector<int> arr(n);
    string ans = "";
    for (i = 0; i < 26; i++)
    {
        if (k <= 1)
        {
            continue;
        }
        m = -1;
        z = INT_MAX;
        for (j = 0; j < n; j++)
        {
            if (s[j] == 'Z')
            {
                continue;
            }
            while (m >= 0 && s[arr[m]] > s[j])
            {
                z = min(z, arr[m]);
                m--;
            }
            arr[++m] = j;
        }
        if (arr.size() == 0)
        {
            break;
        }
        for (j = 0; j <= m && s[arr[j]] <= s[z]; j++)
        {
            ans += s[arr[j]];
            s[arr[j]] = 'Z';
        }
        k--;
    }
    cout << ans;
    for (i = 0; i < n; i++)
    {
        if (s[i] != 'Z')
        {
            cout << s[i];
        }
    }
}

int main()
{
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