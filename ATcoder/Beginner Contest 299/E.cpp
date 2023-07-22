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
    cin >> n >> m;
    vector<vector<int>> adjlist(n + 1);
    for (i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
    }
    vector<vector<int>> d(n + 1, vector<int>(n + 1, INT_MAX));
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
    }
}