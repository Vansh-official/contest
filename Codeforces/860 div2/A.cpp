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
    vector<int> a(n), b(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        cin >> b[i];
    int x, y;
    for (i = 0; i < n; i++)
        if (a[i] > b[i])
            swap(a[i], b[i]);
    x = a[n - 1];
    y = b[n - 1];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a[n - 1] == x && b[n - 1] == y)
        cout << "Yes";
    else
        cout << "No";
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