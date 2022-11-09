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

int n, m, p, i, j;
string s;

void solve(int T)
{
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sum /= (n + 1);
    for (i = 0; i < n; i++)
        cout << a[i] - sum << " ";
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