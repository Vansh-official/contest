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

int n, m, k, i, j, x;

void solve(int T)
{
    string s;
    cin >> n >> s;
    sort(s.begin(), s.end());
    s.resize(distance(s.begin(), unique(s.begin(), s.end())));
    cout << n + s.size();
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