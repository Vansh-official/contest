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
string s;

long long modu = 1000000007;

void solve(int T)
{
    cin >> n >> m;
    vector<int> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    set<int> arr;
    for (i = 1; i <= 150; i++)
        arr.insert(i);
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        int x = *arr.begin();
        arr.erase(x);
        if (x == a[i])
            continue;
        if (x != a[i])
        {
            sum += x;
            i--;
        }
    }
    while (sum < m)
    {
        j = *arr.begin();
        arr.erase(j);
        sum += j;
    }
    if (sum > m)
        cout << "NO";
    else
        cout << "YES";
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(t);
        cout << "\n";
    }
}