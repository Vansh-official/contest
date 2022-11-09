#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <cmath>

using namespace std;

long long arr[6000];

long long bs(int i, int j, long long t)
{
    int mid = (i + j) / 2, ans = mid;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (abs(arr[mid] - t) < abs(arr[ans] - t))
        {
            ans = mid;
        }
        if (arr[mid] > t)
        {
            j = mid - 1;
        }
        else if (arr[mid] < t)
        {
            i = mid + 1;
        }
        else
        {
            break;
        }
    }
    return ans;
}

void solve(int T)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = 0, x;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 2; j < n; j++)
        {
            long long temp = (arr[i] + arr[j]) / 2;
            int k = bs(i + 1, j - 1, temp);
            int p = bs(i + 1, j - 1, temp + 1);
            x = (arr[j] - arr[k]) * (arr[k] - arr[i]);
            x = max(x, (arr[j] - arr[p]) * (arr[p] - arr[i]));
            ans += x;
        }
    }
    cout << ans;
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