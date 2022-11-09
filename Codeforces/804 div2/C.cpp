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
long long modulo = 1000000007;

void solve(int T)
{
    cin >> n;
    vector<long long> arr(n), p(n, 1);
    set<long long> s, p;
    x = n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ind = 0;
    for (i = 0; i < n; i++)
        if (arr[i] == 0)
        {
            ind = i;
            break;
        }
    for (i = 0; i < ind; i++)
    {
        s.insert(arr[i]);
        if (*s.begin() != x)
        {
            x = *s.begin();
            p[i] = 0;
        }
    }
    s.clear();
    x = n;
    for (i = n - 1; i > ind; i--)
    {
        s.insert(arr[i]);
        if (*s.begin() != x)
        {
            x = *s.begin();
            p[i] = 0;
        }
    }
    int count = 0;
    vector<int> q;
    for (i = 0; i < n; i++)
        if (p[i] == 1)
        {
            q.push_back(arr[i]);
            count++;
        }
    sort(q.begin(), q.end());
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