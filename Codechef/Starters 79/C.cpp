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
    cin >> n >> m;
    if (n > m + 1)
        cout << "CHEF";
    else if (m > n + 1)
        cout << "CHEFINA";
    else if (n == m + 1)
    {
        if (n % 2 == 0)
            cout << "CHEF";
        else
            cout << "CHEFINA";
    }
    else if (m == n + 1)
    {
        if (m % 2 == 0)
            cout << "CHEF";
        else
            cout << "CHEFINA";
    }
    else if (n % 2)
        cout
            << "CHEF";
    else
        cout << "CHEFINA";
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