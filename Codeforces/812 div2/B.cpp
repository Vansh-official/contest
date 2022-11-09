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
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        if (i > 0 && a[i] < a[i - 1])
        {
            j = i;
            while (j < n && a[j] <= a[j - 1])
                j++;
            if (j < n && a[j] > a[j - 1])
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
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