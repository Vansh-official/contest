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

void solve(int T)
{
    cin >> n >> m;
    if (m < n)
    {
        cout << -1;
        return;
    }
    m -= n - 1;
    set<int> a;
    for (i = 1; i <= n; i++)
        a.insert(i);
    cout << m << " ";
    a.erase(m);
    for (auto itr = a.begin(); itr != a.end(); itr++)
        cout << *itr << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int p = 1; p <= t; p++)
    {
        solve(p);
        cout << "\n";
    }
}