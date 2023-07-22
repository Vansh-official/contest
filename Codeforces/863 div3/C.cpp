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
    cin >> n;
    vector<int> a(n - 1);
    for (i = 0; i < n - 1; i++)
        cin >> a[i];
    if (n == 2)
    {
        cout << 0 << " " << a[0];
        return;
    }
    vector<int> ans(n);
    i = 0;
    if (a[0] < a[1])
    {
        ans[0] = a[0];
        ans[1] = 0;
        i = 2;
    }
    else if (a[0] == a[1])
    {
        ans[0] = ans[1] = a[0];
        i = 2;
    }
    else
    {
        while (i < n - 1 && a[i] >= a[i + 1])
            ans[i] = a[i++];
        ans[i] = a[i++];
    }
    while (i < n - 1)
    {
    }
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