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

int n, k;
long long sum;

void rec(vector<long long> &arr, vector<long long> &brr, int cur)
{
    if (cur == n)
    {
        long long cursum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cursum += abs(arr[i] - arr[i + 1]) + abs(brr[i] - brr[i + 1]);
        }
        sum = min(sum, cursum);
        return;
    }
    rec(arr, brr, cur + 1);
    swap(arr[cur], brr[cur]);
    rec(arr, brr, cur + 1);
    return;
}

void solve(int T)
{
    cin >> n;
    vector<long long> arr(n), brr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    sum = 2500000000000;
    rec(arr, brr, 0);
    cout << sum;
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