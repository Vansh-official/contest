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
    sort(a.begin(), a.end());
    int mc = 0;
    for (i = 0; i < n; i++)
    {
        j = i;
        k = 1;
        while (j < n - 1 && a[j] == a[j + 1])
        {
            j++;
            k++;
        }
        mc = max(mc, k);
    }
    if (mc > (n / 2) + (n % 2))
        cout << "No";
    else
        cout << "Yes";
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