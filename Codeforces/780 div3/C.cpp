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

int n, m, k, i, j;

void solve(int T)
{
    string s;
    cin >> s;
    n = s.length();
    int ans = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        vector<int> arr(26, 0);
        while (i < n)
        {
            count++;
            arr[s[i] - 'a']++;
            if (arr[s[i] - 'a'] > 1)
            {
                ans += count - 2;
                count = 0;
                break;
            }
            i++;
        }
    }
    cout << ans + count;
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
