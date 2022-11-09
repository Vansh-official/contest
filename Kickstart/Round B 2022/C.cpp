#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <climits>
#include <queue>

using namespace std;

int n;
long long ans, d;

void printans(int t)
{
    cout << "Case #" << t << ": " << ans << endl;
}

void dfs(int l, int r, vector<long long> &arr, long long curans, vector<vector<map<long long, long long>>> &d2)
{
    if (l == 0 && r == n - 1)
    {
        ans = min(curans + min(arr[l], d - arr[l]), ans);
        return;
    }
    auto itr = d2[l][r].find(arr[l]);
    if (itr != d2[l][r].end() && itr->second <= curans)
    {
        return;
    }
    else if (itr != d2[l][r].end())
    {
        itr->second = curans;
    }
    else
    {
        d2[l][r].insert({arr[l], curans});
    }
    int i;
    long long j, m;
    if (l > 0)
    {
        i = l - 1;
        while (i > 0 && arr[i - 1] == arr[i])
        {
            i--;
        }
        j = arr[i];
        m = arr[l];
        curans += min(abs(j - m), d - abs(j - m));
        arr[r] = j;
        dfs(i, r, arr, curans, d2);
        arr[r] = m;
        curans -= min(abs(j - m), d - abs(j - m));
    }
    if (r < n - 1)
    {
        i = r + 1;
        while (i < n - 1 && arr[i + 1] == arr[i])
        {
            i++;
        }
        j = arr[i];
        m = arr[r];
        curans += min(abs(j - m), d - abs(j - m));
        arr[l] = j;
        dfs(l, i, arr, curans, d2);
        arr[l] = m;
        curans -= min(abs(j - m), d - abs(j - m));
    }
    return;
}

void solve(int T)
{
    int i, j;
    ans = LLONG_MAX;
    cin >> n >> d;
    vector<long long> arr(n);
    vector<vector<map<long long, long long>>> d2(n, vector<map<long long, long long>>(n));
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        int ind = i;
        while (i < n - 1 && arr[i + 1] == arr[i])
        {
            i++;
        }
        dfs(ind, i, arr, 0, d2);
    }
    printans(T);
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
    }
}