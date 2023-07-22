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
long long modu = 1000000007;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void solve(int T)
{
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (gcd(a[i], a[j]) <= 2)
            {
                cout << "Yes";
                return;
            }
        }
    }
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