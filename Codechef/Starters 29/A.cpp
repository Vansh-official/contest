#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>
#include <climits>

using namespace std;

int n, m, i, j;
void solve(int T)
{
    string s;
    cin >> n >> s;
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        if (i < n - 1 && s[i] == s[i + 1])
        {
            i++;
            ans++;
        }
        else
        {
            ans++;
        }
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
        cout << "\n";
    }
}