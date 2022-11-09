#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <numeric>

using namespace std;

int n, m, i, j, k;

void solve(int T)
{
    cin >> n;
    long long cost = 0;
    vector<long long> arr(n), brr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    for (i = 0; i < n; i++)
    {
        long long x = 0, y = 0;
        for (j = 0; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (j != k)
                {
                    x += ((arr[j] + arr[k]) * (arr[j] + arr[k])) + ((brr[j] + brr[k]) * (brr[j] + brr[k]));
                }
            }
        }
        swap(arr[i], brr[i]);
        for (j = 0; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (j != k)
                {
                    y += ((arr[j] + arr[k]) * (arr[j] + arr[k])) + ((brr[j] + brr[k]) * (brr[j] + brr[k]));
                }
            }
        }
        if (x < y)
        {
            swap(arr[i], brr[i]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            cost += ((arr[i] + arr[j]) * (arr[i] + arr[j])) + ((brr[i] + brr[j]) * (brr[i] + brr[j]));
        }
    }
    cout << cost;
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