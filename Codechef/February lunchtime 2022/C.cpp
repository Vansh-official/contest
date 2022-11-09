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
    vector<pair<int, char>> arr(n);
    vector<int> brr(n), crr(n), sorted(n);
    int north = 0, south = 0, ans = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        brr[i] = crr[i] = sorted[i] = arr[i].first;
    }
    for (i = 0; i < n; i++)
    {
        cin >> arr[i].second;
        if (arr[i].second == 'N')
        {
            north++;
        }
        else
        {
            south++;
        }
    }
    for (i = 1; i < n; i++)
    {
        if (arr[i].first < arr[i - 1].first)
        {
            if (south == 0 || north == 0)
            {
                cout << -1;
                return;
            }
            else
            {
                ans++;
                break;
            }
        }
    }
    if (ans == 0)
    {
        cout << ans;
        return;
    }
    sort(sorted.begin(), sorted.end());
    bool ns = 0, sn = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i].second == 'N')
        {
            break;
        }
    }
    for (j = n - 1; j >= 0; j--)
    {
        if (arr[j].second == 'S')
        {
            break;
        }
    }
    if (i < j)
    {
        sort(brr.begin() + i, brr.begin() + j + 1);
        if (brr == sorted)
        {
            ns = 1;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i].second == 'S')
        {
            break;
        }
    }
    for (j = n - 1; j >= 0; j--)
    {
        if (arr[j].second == 'N')
        {
            break;
        }
    }
    if (i < j)
    {
        sort(crr.begin() + i, crr.begin() + j + 1);
        if (crr == sorted)
        {
            sn = 1;
        }
    }
    if (sn || ns)
    {
        cout << 1;
    }
    else
    {
        cout << 2;
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