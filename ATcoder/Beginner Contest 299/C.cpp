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

int n, m, i, j, k;
string s;
long long M = 1000000007;

void solve(int T)
{
    cin >> n >> s;
    int ans = -1;
    i = 0;
    while (i < n)
    {
        while (i < n && s[i] == '-')
            i++;
        if (i == n)
            break;
        j = i;
        while (j < n - 1 && s[j + 1] == 'o')
            j++;
        if (i > 0 && s[i - 1] == '-' || j < n - 1 && s[j + 1] == '-')
            ans = max(ans, j - i + 1);
        i = j + 1;
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
    t = 1;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}