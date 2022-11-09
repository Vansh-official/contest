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

int n, m, x, y, i, j;

void solve(int T)
{
    cin >> n;
    int arr[2][3];
    arr[0][0] = arr[1][0] = 1, arr[0][1] = 2;
    int x = -1, count = 0, k = 1, same = 0;
    i = 1;
    j = 2;
    while (count < n - 2)
    {
        while (k == i || k == j)
        {
            k++;
        }
        cout << "? " << i << " " << j << " " << k << "\n";
        cout.flush();
        cin >> y;
        if (y == -1)
        {
            return;
        }
        if (y >= x)
        {
            x = y;
            arr[0][2] = k;
        }
        count++;
        k++;
    }
    x = -1;
    j = arr[1][2] = arr[0][2];
    k = 1;
    count = same = 0;
    while (count < n - 2)
    {
        while (k == i || k == j)
        {
            k++;
        }
        cout << "? " << i << " " << j << " " << k << "\n";
        cout.flush();
        cin >> y;
        if (y == -1)
        {
            return;
        }
        if (y >= x)
        {
            x = y;
            arr[1][1] = k;
        }
        else if (x == y)
        {
            same++;
        }
        count++;
        k++;
    }
    if (same == n - 3)
    {
        cout << "! " << arr[0][0] << " " << arr[0][1] << "\n";
        cout.flush();
        return;
    }
    cout << "! " << arr[1][1] << " " << arr[0][1] << "\n";
    cout.flush();
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