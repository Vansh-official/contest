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

using namespace std;

void solve(int T)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long ans = 1, m = 1000000007;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r')
        {
            ans *= (long long)2;
            ans %= m;
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
        solve(t);
        cout << "\n";
    }
}