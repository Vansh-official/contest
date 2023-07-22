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

void solve(int T)
{
    cin >> n >> k;
    vector<pair<int, int>> c(n);
    for (i = 0; i < n; i++)
        cin >> c[i].first;
    for (i = 0; i < n; i++)
        cin >> c[i].second;
    map<int, vector<pair<int, int>>> a;
    int x = -1;
    for (i = 0; i < n; i++)
    {
        m = c[i].first;
        j = c[i].second;
        a[m].push_back({j, i + 1});
        if (i == 0)
            x = m;
    }
    if (!a[k].size())
        k = x;
    vector<pair<int, int>> temp = a[k];
    sort(temp.begin(), temp.end());
    cout << temp[temp.size() - 1].second;
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