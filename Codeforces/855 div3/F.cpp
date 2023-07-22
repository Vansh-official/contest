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

string inorder(vector<vector<int>> &adjlist, vector<bool> &visited, int cur)
{
}

void solve(int T)
{
    cin >> n;
    vector<vector<int>> adjlist(n);
    for (i = 0; i < n - 1; i++)
    {
        cin >> m >> j;
        m--;
        j--;
        adjlist[m].push_back(j);
        adjlist[j].push_back(m);
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
    t = 1;
    for (int q = 1; q <= t; q++)
    {
        solve(t);
        cout << "\n";
    }
}