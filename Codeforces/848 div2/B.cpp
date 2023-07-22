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

long long modu = 1000000007;

void solve(int T)
{
    int d;
    cin >> n >> m >> d;
    vector<int> a(n + 1), b(m);
    for (i = 0; i < n; i++)
    {
        cin >> k;
        a[k] = i + 1;
    }
    for (i = 0; i < m; i++)
        cin >> b[i];

    long long ans = 0;
    for (i = 0; i < m - 1; i++)
    {
        if (a[b[i]] > a[b[i + 1]])
            continue;
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
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}