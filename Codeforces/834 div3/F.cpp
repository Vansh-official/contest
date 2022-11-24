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
    long long p;
    cin >> n >> p;
    vector<long long> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    set<long long> arr;
    for (i = 0; i < n; i++)
        arr.insert(a[i]);
    if (arr.size() == p)
    {
        cout << 0;
        return;
    }
    long long x = *arr.begin(); , y = p - 1 - (*arr.rbegin());
    long long ans = (*arr.rbegin() - a[n - 1]);
    bool f = 0;
    auto itr = arr.begin();
    if (*itr == a[n - 1])
    {
        cout << ans;
        return;
    }
    long long temp = *itr;
    itr++;
    for (; itr != arr.end(); itr++)
    {
        if (*itr != temp + 1)
            break;
        if (*itr == a[n - 1])
        {
            cout << ans;
            return;
        }
        temp=*itr;
    }
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