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

int n, m, i, j;

void solve(int T)
{
    string s;
    cin >> n >> s;
    vector<int> a(26, 0), b(26, 0);
    for (i = 0; i < n; i++)
        if (i % 2)
            a[s[i] - 'a']++;
        else
            b[s[i] - 'a']++;
    for (i = 0; i < 26; i++)
        if (a[i] != b[i])
        {
            cout << "NO";
            return;
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