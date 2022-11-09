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

int n, m, i, j;

void solve(int T)
{
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool inc = 1;
    int l = 0, r = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            inc = 0;
            break;
        }
    }
    if (inc)
    {
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        return;
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            l = i;
            r = i + 1;
            break;
        }
    }
    for (i = l + 1; i < n; i++)
    {
        if (arr[i] < arr[r])
        {
            r = i;
        }
    }
    for (i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
    for (i = r; i >= l; i--)
    {
        cout << arr[i] << " ";
    }
    for (i = r + 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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