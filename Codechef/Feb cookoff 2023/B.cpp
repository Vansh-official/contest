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

using namespace std;

int n, m, i, j;
string s;

void solve(int T)
{
    cin >> n;
    vector<double> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    double ans = INT_MAX;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
    for (i = 0; i + 2 < n; i++)
    {
        double mean = a[i] + a[i + 1] + a[i + 2];
        mean /= 3.0f;
        cout << a[i] << " " << a[i + 1] << " " << a[i + 2] << " " << mean << "\n";
        ans = min(3.0f * abs(a[i + 1] - mean), ans);
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
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}