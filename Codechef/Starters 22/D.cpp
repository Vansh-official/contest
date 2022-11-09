#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;

void solve(int T)
{
    int n;
    string a, b;
    cin >> n >> a >> b;
    vector<long long> arr(n), brr(n);
    long long za = 0, zb = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
        {
            za++;
        }
        if (b[i] == '0')
        {
            zb++;
        }
        arr[i] = za;
        brr[i] = zb;
    }
    string ans = "";
    int i, j;
    for (i = 0, j = 0; i < n && j < n;)
    {
        if (a[i] == '0')
        {
            ans += a[i++];
        }
        else if (b[j] == '0')
        {
            ans += b[j++];
        }
        else if (za - arr[i] > zb - brr[j])
        {
            ans += a[i++];
        }
        else
        {
            ans += b[j++];
        }
    }
    while (i < n)
    {
        ans += a[i++];
    }
    while (j < n)
    {
        ans += b[j++];
    }
    long long z = za + zb, cur = 0, output = 0;
    for (i = 0; i < 2 * n; i++)
    {
        if (ans[i] == '0')
        {
            cur++;
        }
        else
        {
            output += z - cur;
        }
    }
    cout << output;
}

int main()
{
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