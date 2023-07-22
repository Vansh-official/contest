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

int getmin()
{
    int a = 0, b = 0;
    for (int ind = 0; ind < n; ind++)
    {
        int cur = 1;
        while (ind < n - 1 && s[ind] == s[ind + 1])
        {
            ind++;
            cur++;
        }
        if (s[ind] == '{')
            a = max(a, cur);
        else
            b = max(b, cur);
    }
    return max(a, b) + 1;
}

void solve(int T)
{
    cin >> n >> s;
    cout << getmin();
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