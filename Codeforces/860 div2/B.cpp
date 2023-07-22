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
    cin >> m;
    vector<vector<int>> a(m);
    map<int, int> count;
    for (i = 0; i < m; i++)
    {
        cin >> n;
        while (n--)
        {
            cin >> j;
            a[i].push_back(j);
            count[j]++;
        }
    }
    vector<int> winners;
    for (i = 0; i < m; i++)
    {
        bool tak = 0;
        for (j = 0; j < a[i].size(); j++)
        {
            count[a[i][j]]--;
            if (!count[a[i][j]] && !tak)
            {
                winners.push_back(a[i][j]);
                tak = 1;
            }
        }
        if (!tak)
        {
            cout << -1;
            return;
        }
    }
    for (i = 0; i < m; i++)
        cout << winners[i] << " ";
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