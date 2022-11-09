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

using namespace std;

int n, m, i, j, k;
string s;

long long modu = 1000000007, ans;

void solve(int T)
{
    long long x;
    cin >> n >> x;
    vector<long long> count(n, 0);
    vector<vector<int>> adjlist(n);
    for (i = 0; i < n - 1; i++)
    {
        cin >> j >> k;
        j--;
        k--;
        count[j]++;
        count[k]++;
        adjlist[j].push_back(k);
        adjlist[k].push_back(j);
    }
    int c = 0;
    for (j = 0; j < n; j++)
        if (count[j] <= 1)
            break;
    ans = x;
    for (i = 0; i < n; i++)
        if (i != j)
        {
            /*long long temp = 0;
            for (k = 0; k < adjlist[i].size(); k++)
                temp += count[adjlist[i][k]];
            temp -= count[i] + 1;*/
            ans = (ans * max(x - count[i], 0ll)) % modu;
        }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}