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
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        a[i] = i + 1;
    cout << n;
    for (i = 0; i < n; i++)
    {
        cout << "\n";
        for (j = 0; j < n; j++)
            cout << a[j] << " ";
        if (i + 1 < n)
            swap(a[0], a[i + 1]);
    }
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