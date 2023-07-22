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
long long modu = 100000000;

void solve(int T)
{
    string a, b;
    cin >> a >> b;
    n = a.length();
    m = b.length();
    if (a[0] == b[0])
    {
        cout << "YES\n"
             << a[0] << "*";
        return;
    }
    if (a[n - 1] == b[m - 1])
    {
        cout << "YES\n"
             << "*" << a[n - 1];
        return;
    }
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < m - 1; j++)
            if (a[i] == b[j] && a[i + 1] == b[j + 1])
            {
                cout << "YES\n"
                     << "*" << a[i] << a[i + 1] << "*";
                return;
            }
    cout << "NO";
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