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
    cin >> n >> s;
    int a = -1, b = -1, c = -1;
    for (i = 0; i < n; i++)
        if (s[i] == '|' && a == -1)
            a = i;
        else if (s[i] == '|')
            b = i;
        else if (s[i] == '*')
            c = i;
    if (c > a && c < b)
        cout << "in";
    else
        cout << "out";
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