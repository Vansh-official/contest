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

void in(vector<long long> &a, int N)
{
    for (int x = 0; x < N; x++)
        cin >> a[i];
    return;
}

void solve(int T)
{
    bool ans = 0;
    vector<string> a(3);
    cin >> a[0] >> a[1] >> a[2];
    for (i = 0; i < 3; i++)
        if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] != '.')
        {
            cout << a[0][i];
            return;
        }
        else if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] != '.')
        {
            cout << a[i][0];
            return;
        }
    if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[1][1] != '.')
    {
        cout << a[0][0];
        return;
    }
    if (a[2][0] == a[1][1] && a[1][1] == a[0][2] && a[1][1] != '.')
    {
        cout << a[2][0];
        return;
    }
    cout << "DRAW";
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