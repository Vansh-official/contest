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
    long long p, cost = 0;
    cin >> s >> p;
    n = s.size();
    vector<long long> arr(26, 0);
    for (i = 0; i < n; i++)
    {
        arr[s[i] - 'a']++;
        cost += (s[i] - 'a' + 1);
    }
    i = 25;
    while (i >= 0 && cost > p)
        if (arr[i] > 0)
        {
            arr[i]--;
            cost -= i + 1;
        }
        else
            i--;
    for (i = 0; i < n; i++)
        if (arr[s[i] - 'a'] > 0)
        {
            cout << s[i];
            arr[s[i] - 'a']--;
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