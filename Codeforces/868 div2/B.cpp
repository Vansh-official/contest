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
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b = a;
    sort(b.begin(), b.end());
    vector<set<int>> pos(k);
    for (i = 0; i < k; i++)
        for (j = i; j < n; j += k)
            pos[i].insert(a[j]);
    int count = 0;
    for (i = 0; i < k; i++)
        for (j = i; j < n; j += k)
            if (pos[i].find(b[j]) == pos[i].end())
                count++;
    if (!count)
        cout << 0;
    else if (count == 2)
        cout << 1;
    else
        cout << -1;
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